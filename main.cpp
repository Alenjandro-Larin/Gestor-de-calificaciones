#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "Gestor_de_Calificaciones.h"
using namespace std;

void Menu(){
    cout << "Gestor de Calificaciones - Ingenieria Informatica -" << endl;
    cout << "(1) Ingresar Notas" << endl;
    cout << "(2) Mostrar Notas" << endl;
    cout << "(3) Promedio Total del Curso"  << endl;
    cout << "(4) Salir del Programa" << endl;
    while (!(cin >> change)) {
    cout << "Entrada invalida. Ingrese un numero: ";
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}

void Menu2(){
    cout << "(A) Cuatrimestre 1" << endl;
    cout << "(B) Cuatrimestre 2" << endl;
}

int main(){
    int change;
    int change2;
    Cuatrimestre1 cuatrimestre1;
    // Suponiendo que tienes una instancia de Cuatrimestre1 llamada cuatrimestre1
    vector<string> materias = {"Matematica I", "Programacion I", "Introduccion a la Gestion de Proyectos de Software", "Fisica", "Teconologia y Estructura de Ordenadores"};
    cuatrimestre1.SetMaterias(materias);

    do {
    Menu();
    }
        switch (change){
            case 1:
                Menu2();
            cin >> change2;
            change2 = tolower(change2);
                switch (change2)
                {
                case 'a':
                    cuatrimestre1.SetNotas();
                    break;
                case 'b':
     
                    break;
                default:
                    break;
                }
                break;
            case 2:
                Menu2();
            cin >> change2;
            change2 = tolower(change2);
                switch (change2)
                {
                case 'a':
                    // MostrarNotas(gestor);
                    // cout << endl;
                    // MostrarPromedio(gestor);
                    break;
                case 'b':
                default:
                    break;
                }
                break;
            case 3:
                // PromedioTotal(gestor, gestor2);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, seleccione nuevamente." << endl;
                break;
            }

        if (change != 4) {
            char backChoice;
            cout << "" << endl;
            cout << "Desea volver al menu principal (S/N): ";
            cin >> backChoice;
            cout << endl;
            if (backChoice != 'S' && backChoice != 's') {
                change = 4; 
            }
        }

    } while (change != 4);


    return 0;
} 

/*
 void MostrarNotas(Cuatrimestre1 *gestor){
     materia = gestor->GetMaterias();
     cout << "Materias del Primer Semestre: " << endl;
     for (int i = 0; i < materia.size(); i++){
         cout << "Materia: " << materia[i] << " ------------- " << " Nota: " << notas[i] << endl;
     }
 }
 void IngresarNotas(Cuatrimestre1 *gestor){
     gestor->SetNotas();
     for (int i = 0; i < 5; i++) {
         notas[i] = gestor->GetNota(i);
     }
 }
 void MostrarPromedio(Cuatrimestre1 *gestor){
     gestor->SetPromedio();
     cout << "El Promedio Total del Semestre fue de: " << gestor->GetPromedio() << endl;
 }
 void MostrarPromedioSemestre2(Cuatrimestre2 *gestor2){
     gestor2->SetPromedioSemestre2();
     cout << "El Promedio Total del Semestre fue de: " << gestor2->GetPromedioSemestre2() << endl;
 
 }
 void MostrarNotasSemestre2(Cuatrimestre2 *gestor2)
 {
     materiaSegundoSemestre = gestor2->GetMateriasSemestre2(); 
     cout << "Materias del Segundo Semestre: " << endl;
     for (int i = 0; i < materiaSegundoSemestre.size(); i++){
         cout << "Materia: " << materiaSegundoSemestre[i] << " ------------- " << " Nota: " << notas2[i] << endl;
     }
 }
 void IngresarNotasSemestre2(Cuatrimestre2 *gestor2){
     gestor2->SetNotasSemestre2();
     for (int i = 0; i < 5; i++){
         notas2[i] = gestor2->GetNotaSemestre2(i);
     }
 }
 void PromedioTotal(Cuatrimestre1 *gestor, Cuatrimestre2 *gestor2){
     if (gestor->GetPromedio() == 0 || gestor2->GetPromedioSemestre2() == 0){
         cout << "AVISO: No hay registro de alguno de los semestres todavia" << endl;
     }
     else{
         float promedioTotal = (gestor->GetPromedio() + gestor2->GetPromedioSemestre2())/2;
         cout << "El promedio total de los 2 semestres fue de: " << promedioTotal << endl;
         if (promedioTotal > 8){
             cout << "Felicidades obtuviste una matricula de honor!!" << endl;
         }
         else if (promedioTotal <= 4){
             cout << "Lastimosamente has reprobado" << endl;
         }
     }
 }*/