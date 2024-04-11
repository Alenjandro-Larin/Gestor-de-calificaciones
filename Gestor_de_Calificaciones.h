#include <iostream>
#include <string>
#include <vector>

struct Estructura{
    float nota[5];
    float promedio;
};
typedef struct Estructura TAsignatura;
class Cuatrimestre1{
    private:
        std::vector<std::string> arrayDeMaterias;
        std::string materias;
        TAsignatura asignaturasPrimerSemestre;
    public:
        float GetNota(int);
        float GetPromedio();
        void SetNotas();
        void SetPromedio();
        void SetMaterias(std::string, std::string, std::string, std::string, std::string);
        std::vector<std::string> GetMaterias();
};

class Cuatrimestre2{
    private:
        std::vector<std::string> arrayDeMaterias2;
        std::string materias;
        TAsignatura asignaturasSegundoSemestre;
    public:
        float GetNotaSemestre2(int);
        float GetPromedioSemestre2();
        void SetNotasSemestre2();
        void SetPromedioSemestre2();
        void SetMateriasSemestre2(std::string, std::string, std::string, std::string, std::string);
        std::vector<std::string> GetMateriasSemestre2();
};