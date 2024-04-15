#include <iostream>

void MostrarPromedio(Cuatrimestre1 *gestor);
void MostrarNotas(Cuatrimestre1 *gestor);
void IngresarNotas(Cuatrimestre1 *gestor);

void MostrarPromedioSemestre2(Cuatrimestre2 *gestor2);
void MostrarNotasSemestre2(Cuatrimestre2 *gestor2);
void IngresarNotasSemestre2(Cuatrimestre2 *gestor2);

void PromedioTotal(Cuatrimestre1 *gestor, Cuatrimestre2 *gestor2);
std::vector<std::string> materia;
std::vector<std::string> materiaSegundoSemestre;
float notas[5];
float notas2[4];


void Menu(){
    std::cout << "Gestor de Calificaciones - Ingenieria Informatica -" << std::endl;
    std::cout << "(1) Ingresar Notas" << std::endl;
    std::cout << "(2) Mostrar Notas" << std::endl;
    std::cout << "(3) Promedio Total del Curso"  << std::endl;
    std::cout << "(4) Salir del Programa" << std::endl;
}

void Menu2(){
    std::cout << "(A) Cuatrimestre 1" << std::endl;
    std::cout << "(B) Cuatrimestre 2" << std::endl;
}

int main(){
    cout << "Hello world"
    return 0
}