#include <iostream>
#include <vector>
#include "Gestor_de_Calificaciones.h"

using namespace std;

int main() {
    // Crear una instancia de Cuatrimestre2
    Cuatrimestre2 cuatrimestre2;
    int selectMenu;
    float nota;
    // Definir un vector de arrayMaterias
    vector<string> arrayMaterias = {"Matemáticas", "Ciencias Fisicas", "Logica", "Programacion", "TIC"};
    // Definir un vector de arrayNotas
    vector<float> arrayNotas;

    cout<< "1.Ingresar notas. \n2.Mostrar notas. \n3.Mostrar promedio \n4.Salir \n"<<endl;
    cout<< "Ingrece Opcion Aqui: "; cin >> selectMenu; cout<<endl;
     

    switch (selectMenu)
    {
    case 1:
        cout<<"INGRESAR NOTAS"<<endl;
        cout<< "-------------------------------------------------------------------"<<endl;
          for (size_t i = 0; i <arrayMaterias.size(); i++)
        {
            cout<<"Ingrese nota de: "<<arrayMaterias[i]<<": ";cin>>nota; cout<<endl;
            arrayNotas.push_back(nota);
        }
        break;
    case 2:
        cout<<"MOSTRAR NOTAS"<<endl;
        cout<< "-------------------------------------------------------------------"<<endl;
        for (size_t i = 0; i <arrayMaterias.size(); i++)
        {
            cout<<"Nota de "<<arrayMaterias[i]<<": "<<arrayNotas[i] <<endl;
        }

        break;
    case 3:
        cout<<"MOSTRAR PROMEDIO"<<endl;
        cout<< "-------------------------------------------------------------------"<<endl;
        break;
    case 4:
        cout<< "Saliendo del programa..."<<endl;
        break;
    default:
        cout<< "El dato que ingresastes no aparece en el menu de opcioncines..."<<endl;
        break;
    }

    return 0;
}