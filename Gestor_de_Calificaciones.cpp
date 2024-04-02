#include <iostream>
#include <string>
#include <vector>
#include "Gestor_de_Calificaciones.h"

float Cuatrimestre1::GetNota(int pos){
    return nota[pos];
}

float Cuatrimestre1::GetPromedio(){
    return promedio;
}

void Cuatrimestre1::SetNotas(){
    float pNota1; float pNota2; float pNota3; float pNota4; float pNota5;

    std::cout << "Ingresa la nota de Matematica I: ";
    std::cin >> pNota1;
    std::cout << "Ingresa la nota de Programacion I: ";
    std::cin >> pNota2;
    std::cout << "Ingresa la nota de Introduccion a la Gestion de Proyectos de Software: ";
    std::cin >> pNota3;
    std::cout << "Ingresa la nota de Fisica: ";
    std::cin >> pNota4;
    std::cout << "Ingresa la nota de Tecnologias y Estructura de Ordenadores: ";
    std::cin >> pNota5;

    nota[0] = pNota1;
    nota[1] = pNota2;
    nota[2] = pNota3;
    nota[3] = pNota4;
    nota[4] = pNota5;
}

void Cuatrimestre1::SetPromedio(){
    promedio = (nota[0] + nota[1] + nota[2] + nota[3] + nota[4])/5;
}

void Cuatrimestre1::SetMaterias(std::string materia1, std::string materia2, std::string materia3, std::string materia4, std::string materia5){
    arrayDeMaterias = {materia1, materia2, materia3, materia4, materia5};
}

std::vector<std::string> Cuatrimestre1::GetMaterias(){
    return arrayDeMaterias;
}

float Cuatrimestre2::GetNotaSemestre2(int posicion){
    return nota2[posicion];
}

float Cuatrimestre2::GetPromedioSemestre2(){
    return promedioSemestre2;
}

void Cuatrimestre2::SetNotasSemestre2(){
        float pNota1; float pNota2; float pNota3; float pNota4; float pNota5;

    std::cout << "Ingresa la nota de Matematica II: ";
    std::cin >> pNota1;
    std::cout << "Ingresa la nota de Programacion II: ";
    std::cin >> pNota2;
    std::cout << "Ingresa la nota de Logica: ";
    std::cin >> pNota3;
    std::cout << "Ingresa la nota de Matematica Discreta: ";
    std::cin >> pNota4;
    std::cout << "Ingresa la nota de Tecnologias de la Informacion y Comunicacion: ";
    std::cin >> pNota5;

    nota2[0] = pNota1;
    nota2[1] = pNota2;
    nota2[2] = pNota3;
    nota2[3] = pNota4;
    nota2[4] = pNota5;
}

void Cuatrimestre2::SetPromedioSemestre2(){
    promedioSemestre2 = (nota2[0] + nota2[1] + nota2[2] + nota2[3] + nota2[4])/5;
}

void Cuatrimestre2::SetMateriasSemestre2(std::string materia1, std::string materia2, std::string materia3, std::string materia4, std::string materia5){
    arrayDeMaterias2 = {materia1, materia2, materia3, materia4, materia5};
}

std::vector<std::string> Cuatrimestre2::GetMateriasSemestre2(){
    return arrayDeMaterias2;
}
