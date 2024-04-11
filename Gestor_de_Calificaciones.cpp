#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include "Gestor_de_Calificaciones.h"

float Cuatrimestre1::GetNota(int pos)
{
    return asignaturasPrimerSemestre.nota[pos];
}

float Cuatrimestre1::GetPromedio(){
    return asignaturasPrimerSemestre.promedio;
}

void Cuatrimestre1::SetNotas(){
    float pNota1; float pNota2; float pNota3; float pNota4; float pNota5;
    
    std::cout << "Ingresa la nota de Matematica I: ";
    while (!(std::cin >> pNota1)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Programacion I: ";
    while (!(std::cin >> pNota2)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Introduccion a la Gestion de Proyectos de Software: ";
    while (!(std::cin >> pNota3)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Fisica: ";
    while (!(std::cin >> pNota4)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Tecnologias y Estructura de Ordenadores: ";
    while (!(std::cin >> pNota5)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } 
    //Array nota cuatrimestre 1
    asignaturasPrimerSemestre.nota[0] = pNota1;
    asignaturasPrimerSemestre.nota[1] = pNota2;
    asignaturasPrimerSemestre.nota[2] = pNota3;
    asignaturasPrimerSemestre.nota[3] = pNota4;
    asignaturasPrimerSemestre.nota[4] = pNota5;  
}

void Cuatrimestre1::SetPromedio(){
    asignaturasPrimerSemestre.promedio = (asignaturasPrimerSemestre.nota[0] + asignaturasPrimerSemestre.nota[1] + asignaturasPrimerSemestre.nota[2] + asignaturasPrimerSemestre.nota[3] + asignaturasPrimerSemestre.nota[4])/5;
}

void Cuatrimestre1::SetMaterias(std::string materia1, std::string materia2, std::string materia3, std::string materia4, std::string materia5){
    arrayDeMaterias = {materia1, materia2, materia3, materia4, materia5}; 
}

std::vector<std::string> Cuatrimestre1::GetMaterias()
{
    return arrayDeMaterias;
}

//Cuatrimestre 2
float Cuatrimestre2::GetNotaSemestre2(int posicion){
    return asignaturasSegundoSemestre.nota[posicion];
}

float Cuatrimestre2::GetPromedioSemestre2(){
    return asignaturasSegundoSemestre.promedio;
}

void Cuatrimestre2::SetNotasSemestre2(){
    float p2Nota1; float p2Nota2; float p2Nota3; float p2Nota4; float p2Nota5;

    std::cout << "Ingresa la nota de Matematica II: ";
    while (!(std::cin >> p2Nota1)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Programacion II: ";
    while (!(std::cin >> p2Nota2)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Logica: ";
    while (!(std::cin >> p2Nota3)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Matematica Discreta: ";
    while (!(std::cin >> p2Nota4)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    std::cout << "Ingresa la nota de Tecnologias de la Informacion y Comunicacion: ";
    while (!(std::cin >> p2Nota5)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } 
    asignaturasSegundoSemestre.nota[0] = p2Nota1;
    asignaturasSegundoSemestre.nota[1] = p2Nota2;
    asignaturasSegundoSemestre.nota[2] = p2Nota3;
    asignaturasSegundoSemestre.nota[3] = p2Nota4;
    asignaturasSegundoSemestre.nota[4] = p2Nota5; 
}

void Cuatrimestre2::SetPromedioSemestre2(){
    asignaturasSegundoSemestre.promedio = (asignaturasSegundoSemestre.nota[0] + asignaturasSegundoSemestre.nota[1] + asignaturasSegundoSemestre.nota[2] + asignaturasSegundoSemestre.nota[3] + asignaturasSegundoSemestre.nota[4])/5; 
}

void Cuatrimestre2::SetMateriasSemestre2(std::string materia1, std::string materia2, std::string materia3, std::string materia4, std::string materia5){
    arrayDeMaterias2 = {materia1, materia2, materia3, materia4, materia5};  
}

std::vector<std::string> Cuatrimestre2::GetMateriasSemestre2(){
    return arrayDeMaterias2;
}
