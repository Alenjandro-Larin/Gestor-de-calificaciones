#include <iostream>
#include <string>
#include <vector>
#include "Gestor_de_Calificaciones.h"

float Cuatrimestre2::GetNota(int pos)
{
    return nota[pos];
}

float Cuatrimestre2::GetPromedio()
{
    return promedio;
}

void Cuatrimestre2::SetNotas()
{
    float pNota1;
    float pNota2;
    float pNota3;
    float pNota4;
    float pNota5;

    std::cout << "Ingresa la nota de Matematica 2: ";
    std::cin >> pNota1;
    std::cout << "Ingresa la nota de Programacion 2: ";
    std::cin >> pNota2;
    std::cout << "Ingresa la nota de Logica: ";
    std::cin >> pNota3;
    std::cout << "Ingresa la nota de Matematica discreta: ";
    std::cin >> pNota4;
    std::cout << "Ingresa la nota de Tecnologias de la Informacion y Comunicacion: ";
    std::cin >> pNota5;


    nota[0] = pNota1;
    nota[1] = pNota2;
    nota[2] = pNota3;
    nota[3] = pNota4;
    nota[4] = pNota5;
}




void Cuatrimestre2::SetMaterias(std::string materia1, std::string materia2, std::string materia3, std::string materia4, std::string materia5)
{
    arrayDeMaterias = {materia1, materia2, materia3, materia4, materia5};
}

void Cuatrimestre2::SetPromedio()
{
  promedio = (nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5;
}



std::vector<std::string> Cuatrimestre2::GetMaterias()
{
    return arrayDeMaterias;
}
