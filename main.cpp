#include <iostream>
#include <vector>
#include <string>
#include <limits> // Para utilizar numeric_limits
#include "Gestor_de_Calificaciones.h"

using namespace std;

int main() {
    // Crear una instancia de Cuatrimestre2
    Cuatrimestre2 cuatrimestre2;
    int selectMenu;
    char respuesta;
    float nota;
    // Definir un vector de arrayMaterias
    vector<string> arrayMaterias = {"Matemáticas", "Ciencias Fisicas", "Logica", "Programacion", "TIC"};
    // Definir un vector de arrayNotas
    vector<float> arrayNotas;

    do {
        // Solicitar selección del menú hasta que se ingrese un número entero
        do {
            cout << "1. Ingresar notas." << endl;
            cout << "2. Mostrar notas." << endl;
            cout << "3. Mostrar promedio." << endl;
            cout << "4. Salir." << endl;
            cout << endl;
            cout << "Ingrese opción: ";
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
                for (size_t i = 0; i < arrayMaterias.size(); i++) {
                    // Validar que la entrada sea un número
                    while (true) {
                        cout << "Ingrese nota de " << arrayMaterias[i] << ": ";
                        if (cin >> nota) {
                            arrayNotas.push_back(nota);
                            break; // Salir del bucle si se ingresó un número válido
                        } else {
                            // Limpiar estado de error y vaciar búfer de entrada
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            cout << "Dato inválido. Por favor, ingrese un número." << endl;
                        }
                    }
                }
                break;
            case 2:
                cout << "MOSTRAR NOTAS" << endl;
                cout << "-------------------------------------------------------------------" << endl;
                for (size_t i = 0; i < arrayMaterias.size(); i++) {
                    cout << "Nota de " << arrayMaterias[i] << ": " << arrayNotas[i] << endl;
                }
                break;
            case 3:
                cout << "MOSTRAR PROMEDIO" << endl;
                cout << "-------------------------------------------------------------------" << endl;
                // Aquí calculas y muestras el promedio
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