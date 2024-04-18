#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <cmath>
#include "Gestor_de_Calificaciones.h" 
using namespace std;

void Cuatrimestre2::SetMaterias(const vector<string>& materias) {
    arrayDeMaterias = materias;
}

void Cuatrimestre2::SetNotas() {
 float pNota;
 for (size_t i = 0; i < arrayDeMaterias.size(); i++) {
     cout << "Ingresa la nota de " << arrayDeMaterias[i] << ": ";
     while (!(cin >> pNota)) {
         cout << "Entrada invalida. Ingrese un numero: ";
         cin.clear(); 
         cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
     }  
     asignaturasSegundoSemestre.arrayDeNotas.push_back(pNota);
 }
}

vector<string> Cuatrimestre2::GetMaterias() {
    return arrayDeMaterias;
}

void Cuatrimestre2::GetNotas() {
    // Verificar si el array de notas está vacío
    if (asignaturasSegundoSemestre.arrayDeNotas.empty()) {
        cout << "No hay notas ingresadas." << endl;
        return;
    }

    // Mostrar las notas
    for (size_t i = 0; i < arrayDeMaterias.size(); i++) {
        cout << "La nota de " << arrayDeMaterias[i] << " es: " << asignaturasSegundoSemestre.arrayDeNotas[i] << endl;
    }
}

void  Cuatrimestre2::SetPromedio(){
    float promedio = 0.0f;

     for (int i = 0; i < asignaturasSegundoSemestre.arrayDeNotas.size(); ++i) {
        asignaturasSegundoSemestre.promedio += asignaturasSegundoSemestre.arrayDeNotas[i];
    }

    asignaturasSegundoSemestre.promedio /= asignaturasSegundoSemestre.arrayDeNotas.size();

    // Mostrar el promedio
    cout << "El promedio del cuatrimestre es: " << round(asignaturasSegundoSemestre.promedio * 100) / 100 << endl;
}

float Cuatrimestre2::GetPromedio(){
    return asignaturasSegundoSemestre.promedio; 
}
