#pragma once // Directiva de preprocesador para evitar la inclusión múltiple del archivo de encabezado

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estructura {
    vector<float> arrayDeNotas; 
    
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
    void GetPromedio();
   
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
    void GetPromedio();
   
};



//end of the class

/*
class Cuatrimestre2{
    private:
        vector<string> arrayDeMaterias2;
        string materias;
        TAsignatura asignaturasSegundoSemestre;
    public:
        float GetNotaSemestre2(int);
        float GetPromedioSemestre2();
        void SetNotasSemestre2();
        void SetPromedioSemestre2();
        void SetMateriasSemestre2(string, string, string, string, string);
        vector<string> GetMateriasSemestre2();
};*/
