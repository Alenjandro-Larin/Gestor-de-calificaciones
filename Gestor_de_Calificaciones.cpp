#include <iostream>
#include <string>
#include <limits>
#include <vector>
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

float Cuatrimestre1::GetNota(int index) {
    if (index >= 0 && index < asignaturasPrimerSemestre.arrayDeNotas.size()) {
        return asignaturasPrimerSemestre.arrayDeNotas[index]; // Cambiado de arrrayDeNotas a arrayDeNotas
    } else {
        // Manejar el caso en que el índice esté fuera de rango
        cout << "Índice fuera de rango." << endl;
        return -1; // Retornar un valor por defecto o lanzar una excepción
    }
}





























// //Cuatrimestre 2
// float Cuatrimestre2::GetNotaSemestre2(int posicion){
//     return asignaturasSegundoSemestre.nota[posicion];
// }

// float Cuatrimestre2::GetPromedioSemestre2(){
//     return asignaturasSegundoSemestre.promedio;
// }

// void Cuatrimestre2::SetNotasSemestre2(){
//     float p2Nota1; float p2Nota2; float p2Nota3; float p2Nota4; float p2Nota5;

//     cout << "Ingresa la nota de Matematica II: ";
//     while (!(cin >> p2Nota1)) {
//     cout << "Entrada invalida. Ingrese un numero: ";
//     cin.clear(); 
//     cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//     }
//     cout << "Ingresa la nota de Programacion II: ";
//     while (!(cin >> p2Nota2)) {
//     cout << "Entrada invalida. Ingrese un numero: ";
//     cin.clear(); 
//     cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//     }
//     cout << "Ingresa la nota de Logica: ";
//     while (!(cin >> p2Nota3)) {
//     cout << "Entrada invalida. Ingrese un numero: ";
//     cin.clear(); 
//     cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//     }
//     cout << "Ingresa la nota de Matematica Discreta: ";
//     while (!(cin >> p2Nota4)) {
//     cout << "Entrada invalida. Ingrese un numero: ";
//     cin.clear(); 
//     cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
//     }
//     cout << "Ingresa la nota de Tecnologias de la Informacion y Comunicacion: ";
//     while (!(cin >> p2Nota5)) {
//     cout << "Entrada invalida. Ingrese un numero: ";
//     cin.clear(); 
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//     } 
//     asignaturasSegundoSemestre.nota[0] = p2Nota1;
//     asignaturasSegundoSemestre.nota[1] = p2Nota2;
//     asignaturasSegundoSemestre.nota[2] = p2Nota3;
//     asignaturasSegundoSemestre.nota[3] = p2Nota4;
//     asignaturasSegundoSemestre.nota[4] = p2Nota5; 
// }

// void Cuatrimestre2::SetPromedioSemestre2(){
//     asignaturasSegundoSemestre.promedio = (asignaturasSegundoSemestre.nota[0] + asignaturasSegundoSemestre.nota[1] + asignaturasSegundoSemestre.nota[2] + asignaturasSegundoSemestre.nota[3] + asignaturasSegundoSemestre.nota[4])/5; 
// }

// void Cuatrimestre2::SetMateriasSemestre2(string materia1, string materia2, string materia3, string materia4, string materia5){
//     arrayDeMaterias2 = {materia1, materia2, materia3, materia4, materia5};  
// }

// vector<string> Cuatrimestre2::GetMateriasSemestre2(){
//     return arrayDeMaterias2;
// }
