#include <iostream>
#include <string>
#include <vector>

class EListException{};
class EListOutOfRange : public EListException{};
class Cuatrimestre1{
    private:
        std::vector<std::string> arrayDeMaterias;
        std::string materia;
        float nota[4];
        float promedio;
    public:
        float GetNota(int);
        float GetPromedio();
        void SetNotas();
        void SetPromedio();
        void SetMaterias(std::string, std::string, std::string, std::string, std::string);
        std::vector<std::string> GetMaterias();
}; 