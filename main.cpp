#include <iostream>
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
    Cuatrimestre2 cuatrimestre2;
    // Suponiendo que tienes una instancia de Cuatrimestre1 llamada cuatrimestre1
    vector<string> materiasCuatrimestre1 = {"Matematica I", "Programacion I", "Introduccion a la Gestion de Proyectos de Software", "Fisica", "Teconologia y Estructura de Ordenadores"};
    vector<string> materiasCuatrimestre2 = {"Matematica II", "Programacion II", "Logica", "Matematica Discreta", "Tecnologias de la Informacion y Comunicacion"};
    cuatrimestre1.SetMaterias(materiasCuatrimestre1);
    cuatrimestre2.SetMaterias(materiasCuatrimestre2);

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
                    cuatrimestre1.GetPromedio();
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

