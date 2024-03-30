#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Gestor_de_Calificaciones.h"

void MostrarNotas(Cuatrimestre1 *gestor);

int main(){
    int change;
    Cuatrimestre1 *gestor;
    gestor = new Cuatrimestre1();
    std::vector<std::string> materia;
    std::cout << "Gestor de Calificaciones - Ingenieria Informatica" << std::endl;
    std::cout << "(1) Mostrar Notas" << std::endl;
    std::cin >> change;
    switch (change){
    case 1:
        MostrarNotas(gestor);
        break;
    
    default:
        break;
    }

    delete gestor;
    return 0;
}

void MostrarNotas(Cuatrimestre1 *gestor){
    std::vector<std::string> materia;
    gestor->SetMaterias("Matematica", "Programacion 1", "Logica", "Fisica", "Teconologias de la Informacion y Comunicacion");
    materia = gestor->GetMaterias();
    std::cout << "Materias del Primer Cuatrimestre: " << std::endl;
    for (int i = 0; i < materia.size(); i++){
        std::cout << "Materia: " << materia[i] << std::endl;
    }
}