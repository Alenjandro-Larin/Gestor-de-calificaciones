#pragma once // Directiva de preprocesador para evitar la inclusión múltiple del archivo de encabezado

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estructura {
    vector<float> arrayDeNotas;
    float promedio;
    
};
typedef struct Estructura TAsignatura;


class Cuatrimestre1 {
private:
    vector<string> arrayDeMaterias;
    TAsignatura asignaturasPrimerSemestre;

public:
    // Métodos Set
    void SetNotas();
    void SetMaterias(const vector<string>& materias); // Cambiado el tipo de retorno y nombre del parámetro
    // Métodos Get
    void GetNotas(); // Cambiado el tipo de retorno y agregado el parámetro index
    vector<string> GetMaterias();
    void SetPromedio();
    float GetPromedio();
   
};
class Cuatrimestre2 {
private:
    vector<string> arrayDeMaterias;
    Estructura asignaturas; 
    TAsignatura asignaturasSegundoSemestre;

public:
    // Métodos Set
    void SetNotas();
    void SetMaterias(const vector<string>& materias); // Cambiado el tipo de retorno y nombre del parámetro
    // Métodos Get
    void GetNotas(); // Cambiado el tipo de retorno y agregado el parámetro index
    vector<string> GetMaterias();
    void SetPromedio();
    float GetPromedio();
   
};
