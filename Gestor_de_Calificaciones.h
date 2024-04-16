#include <iostream>
#include<vector>
using namespace std;
class Cuatrimestre2 {
private:
    vector<string> ArrayDeMaterias;
    string materia;
    vector<float> nota;
    float promedio;

public:
    // Métodos get
    string GetMateria(int index) const {
        if (index >= 0 && index < ArrayDeMaterias.size()) {
            return ArrayDeMaterias[index];
        } else {
            cout << "Índice fuera de rango." << endl;
            return ""; // o podrías lanzar una excepción
        }
    }

    string GetMateria() const {
        return materia;
    }

    vector<float> GetNota() const {
        return nota;
    }

    float GetPromedio() const {
        return promedio;
    }

    // Método set para establecer todo el vector de materias
    void SetArrayDeMaterias(const vector<string>& NuevoArrayDeMaterias) {
        ArrayDeMaterias = NuevoArrayDeMaterias;
    }

    // Método set para establecer una sola materia
    void SetMateria(string NuevoMateria) {
        materia = NuevoMateria;
    }

    void SetNota(const vector<float>& NuevoNota) {
        nota = NuevoNota;
    }

    void SetPromedio(float NuevoPromedio) {
        promedio = NuevoPromedio;
    }
};