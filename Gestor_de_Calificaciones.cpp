#include <iostream>
#include <string>
#include <vector>
#include "Gestor_de_Calificaciones.h"

void Cuatrimestre1::SetMaterias(std::string materia1, std::string materia2, std::string materia3, std::string materia4, std::string materia5){
    arrayDeMaterias = {materia1, materia2, materia3, materia4, materia5};
}

std::vector<std::string> Cuatrimestre1::GetMaterias()
{
    return arrayDeMaterias;
}
