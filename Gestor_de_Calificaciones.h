#include <iostream>
#include <string>
#include <vector>

class Cuatrimestre1{
    private:
        std::vector<std::string> arrayDeMaterias;
        int nota;
    public:
        int promedio;
        void SetMaterias(std::string, std::string, std::string, std::string, std::string);
        std::vector<std::string> GetMaterias();
}; 