#include <iostream>
#include <string>
#include <vector>
#include "Gestor_de_Calificaciones.h"

float Cuatrimestre1::GetNota(int pos){
    return nota[pos];
}

void Cuatrimestre1::SetNotas(){
    float pNota1; float pNota2; float pNota3; float pNota4; float pNota5;

    std::cout << "Ingresa la nota de Matematica: ";
    std::cin >> pNota1;
    std::cout << "Ingresa la nota de Programacion 1: ";
    std::cin >> pNota2;
    std::cout << "Ingresa la nota de Logica: ";
    std::cin >> pNota3;
    std::cout << "Ingresa la nota de Fisica: ";
    std::cin >> pNota4;
    std::cout << "Ingresa la nota de Tecnologias de la Informacion y Comunicacion: ";
    std::cin >> pNota5;

    nota[0] = pNota1;
    nota[1] = pNota2;
    nota[2] = pNota3;
    nota[3] = pNota4;
    nota[4] = pNota5;
}

void Cuatrimestre1::SetMaterias(std::string materia1, std::string materia2, std::string materia3, std::string materia4, std::string materia5){
    arrayDeMaterias = {materia1, materia2, materia3, materia4, materia5};
}

std::vector<std::string> Cuatrimestre1::GetMaterias(){
    return arrayDeMaterias;
}
