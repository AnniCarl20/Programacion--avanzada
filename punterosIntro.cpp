/**************************
Autor: Annika Carl
Fecha: 08/02/2023
Tema: Uso de punteros

***************************/

#include <iostream>

using namespace std;

int main()
{
    float variableVector []={2,3,7};
    float *puntero;           //creo mi variable puntero

    for (int i=0; i<3; i++){
        cout<<"Valor: " <<variableVector[i]<<endl;               //Imprimo lo que contiene cada casilla del vector
        puntero=&variableVector[i];                             //a variable puntero (que me señala el lugar de memoria, le voy a asignar la direccion exacta
        cout<<"Direccion de memoria: "<<puntero<<endl;         //me imprimirá la dirección de memoria
    }

    return 0;
}
