#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "Gestor_de_Calificaciones.h"

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
    std::cout << "Gestor de Calificaciones - Ingenieria Informatica - Cuatrimestre - 2" << std::endl;
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
    int change;
    char change2;
    Cuatrimestre1 *gestor;
    Cuatrimestre2 *gestor2;
    gestor = new Cuatrimestre1();
    gestor2 = new Cuatrimestre2();
    gestor->SetMaterias("Matematica I", "Programacion I", "Introduccion a la Gestion de Proyectos de Software", "Fisica", "Teconologia y Estructura de Ordenadores");
    gestor2->SetMateriasSemestre2("Matematica II", "Programacion II", "Logica", "Matematica Discreta", "Tecnologias de la Informacion y Comunicacion");
    do {
    Menu();
    while (!(std::cin >> change)) {
    std::cout << "Entrada invalida. Ingrese un numero: ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
        switch (change){
            case 1:
                Menu2();
            std::cin >> change2;
            change2 = tolower(change2);
                switch (change2)
                {
                case 'a':
                    IngresarNotas(gestor);
                    break;
                case 'b':
                    IngresarNotasSemestre2(gestor2);
                    break;
                default:
                    break;
                }
                break;
            case 2:
                Menu2();
            std::cin >> change2;
            change2 = tolower(change2);
                switch (change2)
                {
                case 'a':
                    MostrarNotas(gestor);
                    std::cout << std::endl;
                    MostrarPromedio(gestor);
                    break;
                case 'b':
                    MostrarNotasSemestre2(gestor2);
                    std::cout << std::endl;
                    MostrarPromedioSemestre2(gestor2);
                default:
                    break;
                }
                break;
            case 3:
                PromedioTotal(gestor, gestor2);
                break;
            case 4:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione nuevamente." << std::endl;
                break;
            }

        if (change != 4) {
            char backChoice;
            std::cout << "" << std::endl;
            std::cout << "Desea volver al menu principal (S/N): ";
            std::cin >> backChoice;
            std::cout << std::endl;
            if (backChoice != 'S' && backChoice != 's') {
                change = 4; 
            }
        }

    } while (change != 4);

    delete gestor;
    delete gestor2;
    return 0;
}

void MostrarNotas(Cuatrimestre1 *gestor){
    materia = gestor->GetMaterias();
    std::cout << "Materias del Primer Semestre: " << std::endl;
    for (int i = 0; i < materia.size(); i++){
        std::cout << "Materia: " << materia[i] << " ------------- " << " Nota: " << notas[i] << std::endl;
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
    std::cout << "El Promedio Total del Semestre fue de: " << gestor->GetPromedio() << std::endl;
}

void MostrarPromedioSemestre2(Cuatrimestre2 *gestor2){
    gestor2->SetPromedioSemestre2();
    std::cout << "El Promedio Total del Semestre fue de: " << gestor2->GetPromedioSemestre2() << std::endl;
   
}

void MostrarNotasSemestre2(Cuatrimestre2 *gestor2)
{
    materiaSegundoSemestre = gestor2->GetMateriasSemestre2(); 
    std::cout << "Materias del Segundo Semestre: " << std::endl;
    for (int i = 0; i < materiaSegundoSemestre.size(); i++){
        std::cout << "Materia: " << materiaSegundoSemestre[i] << " ------------- " << " Nota: " << notas2[i] << std::endl;
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
        std::cout << "AVISO: No hay registro de alguno de los semestres todavia" << std::endl;
    }
    else{
        float promedioTotal = (gestor->GetPromedio() + gestor2->GetPromedioSemestre2())/2;
        std::cout << "El promedio total de los 2 semestres fue de: " << promedioTotal << std::endl;
        if (promedioTotal > 8){
            std::cout << "Felicidades obtuviste una matricula de honor!!" << std::endl;
        }
        else if (promedioTotal <= 4){
            std::cout << "Lastimosamente has reprobado" << std::endl;
        }
    }
}
