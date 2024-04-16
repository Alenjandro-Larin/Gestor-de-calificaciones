#include <iostream>
#include <vector>
#include "Gestor_de_Calificaciones.h"

using namespace std;

int main() {
    // Crear una instancia de Cuatrimestre2
    Cuatrimestre2 cuatrimestre2;

    // Definir un vector de materias
    vector<string> materias = {"Matemáticas", "Ciencias Fisicas", "Logica", "Programacion", "TIC"};

    // Establecer el vector de materias usando SetArrayDeMaterias
    cuatrimestre2.SetArrayDeMaterias(materias);

    // Obtener la materia "Matemáticas" usando GetMateria
    string matematicas = cuatrimestre2.GetMateria(0); // El índice 0 corresponde a "Matemáticas"

    // Imprimir "Matemáticas"
    cout << "La materia 'Matemáticas' es: " << matematicas << endl;

    return 0;
}