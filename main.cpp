#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "Gestor_de_Calificaciones.h"

using namespace std;

int selectMenu;
char respuesta;
void Menu(){
      cout << "1. Ingresar notas." << endl;
            cout << "2. Mostrar notas." << endl;
            cout << "3. Mostrar promedio." << endl;
            cout << "4. Salir." << endl;
            cout << endl;
            cout << "Ingrese opción: ";
            // Verificar si se ingresó un número
          
}

void Menu2(){
    cout << "(A) Cuatrimestre 1" << endl;
    cout << "(B) Cuatrimestre 2" << endl;
}

int main(){
    Cuatrimestre1 cuatrimestre1;
    // Suponiendo que tienes una instancia de Cuatrimestre1 llamada cuatrimestre1
    vector<string> materias = {"Matematica I", "Programacion I", "Introduccion a la Gestion de Proyectos de Software", "Fisica", "Teconologia y Estructura de Ordenadores"};
    cuatrimestre1.SetMaterias(materias);

    do {
        // Solicitar selección del menú hasta que se ingrese un número entero
        do {
            Menu();
            // Verificar si se ingresó un número
            if (!(cin >> selectMenu)) {
                // Limpiar estado de error y vaciar búfer de entrada
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << endl;
                cout << "-------------------------------------------------------------------" << endl;
                cout << "Dato inválido. Por favor, ingrese un número." << endl;
                cout << "-------------------------------------------------------------------" << endl;
            } else {
                break; // Salir del bucle si se ingresó un número entero válido
            }
        } while (true);

        // Procesar la selección del menú
        switch (selectMenu) {
            case 1:
                cout << endl;
                cout << "INGRESAR NOTAS" << endl;
                cout << "-------------------------------------------------------------------" << endl;
                    cuatrimestre1.SetNotas();
                break;
            case 2:
                cout << "MOSTRAR NOTAS" << endl;
                cout << "-------------------------------------------------------------------" << endl;
                    cuatrimestre1.GetNotas();
                break;
            case 3:
                cout << "MOSTRAR PROMEDIO" << endl;
                cout << "-------------------------------------------------------------------" << endl;
                    cuatrimestre1.SetPromedio();
                break;
            case 4:
                cout << "¿Desea salir del programa? (S/N): ";
                cin >> respuesta;
                if (respuesta == 'S' || respuesta == 's') {
                    cout << endl;
                    cout << "Saliendo del programa..." << endl;
                    return 0;
                }
                break;
            default:
                cout << "La opción ingresada no es válida." << endl;
                break;
        }

        // Preguntar al usuario si desea volver al menú
        cout << "¿Desea volver al menú? (S/N): ";
        cin >> respuesta;
        cout << endl;

    } while (respuesta == 'S' || respuesta == 's');

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