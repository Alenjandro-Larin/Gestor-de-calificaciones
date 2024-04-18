#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <cmath>
#include "Gestor_de_Calificaciones.h" 
using namespace std;

void Cuatrimestre1::SetMaterias(const vector<string>& materias) {
    arrayDeMaterias = materias;
}

void Cuatrimestre1::SetNotas() {
 float pNota;
 for (size_t i = 0; i < arrayDeMaterias.size(); i++) {
     cout << "Ingresa la nota de " << arrayDeMaterias[i] << ": ";
     while (!(cin >> pNota)) {
         cout << "Entrada invalida. Ingrese un numero: ";
         cin.clear(); 
         cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
     }  
     asignaturasPrimerSemestre.arrayDeNotas.push_back(pNota);
 }
}

vector<string> Cuatrimestre1::GetMaterias() {
    return arrayDeMaterias;
}

void Cuatrimestre1::GetNotas() {
    // Verificar si el array de notas está vacío
    if (asignaturasPrimerSemestre.arrayDeNotas.empty()) {
        cout << "No hay notas ingresadas." << endl;
        return;
    }

    // Mostrar las notas
    for (size_t i = 0; i < arrayDeMaterias.size(); i++) {
        cout << "La nota de " << arrayDeMaterias[i] << " es: " << asignaturasPrimerSemestre.arrayDeNotas[i] << endl;
    }
}

void Cuatrimestre1::SetPromedio() {

    for (int i = 0; i < asignaturasPrimerSemestre.arrayDeNotas.size(); ++i) {
        asignaturasPrimerSemestre.promedio += asignaturasPrimerSemestre.arrayDeNotas[i];
    }

    asignaturasPrimerSemestre.promedio /= asignaturasPrimerSemestre.arrayDeNotas.size();

    // Mostrar el promedio
    cout << "El promedio del cuatrimestre es: " << round(asignaturasPrimerSemestre.promedio * 100) / 100 << endl;
}

float Cuatrimestre1::GetPromedio(){
    return asignaturasPrimerSemestre.promedio;
}
