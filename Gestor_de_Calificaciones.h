#pragma once // Directiva de preprocesador para evitar la inclusión múltiple del archivo de encabezado

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estructura {
    vector<float> arrayDeNotas; // Cambiado de arrayDeNota a arrayDeNotas
    float promedio;
};

class Cuatrimestre1 {
private:
    vector<string> arrayDeMaterias;
    // string materias; // No necesitas esta variable miembro
    Estructura asignaturasPrimerSemestre; // Cambiado de TAsignatura a Estructura

public:
    // Métodos Set
    void SetNotas();
    void SetPromedio(); // No necesitas este método aquí si no lo estás utilizando
    void SetMaterias(const vector<string>& materias); // Cambiado el tipo de retorno y nombre del parámetro

    // Métodos Get
    float GetNota(int index); // Cambiado el tipo de retorno y agregado el parámetro index
    float GetPromedio();
    vector<string> GetMaterias();
};//end of the class

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