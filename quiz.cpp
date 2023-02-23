/******************************************************************************
Annika Carl
*******************************************/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;


void funcionArreglo();
void funcionVocales ();


int main (){

    int opcion;
    int seguir=1;

    do{

    cout << "Ingrese la opcion que desea: " <<endl;
    cout << "1. Imprimir arreglo usando punteros: " <<endl;
    cout << "2. Arreglo de vocales: " << endl;

    cin >> opcion;

    switch (opcion){

        case 1: funcionArreglo();
        break;
        case 2: funcionVocales ();
        break;
    }

    cout << "\n\nDesea continuar? 1. (si), 0 (no)."<<endl;
    cin >> seguir;

    }
    while (seguir==1);

    return 0;
}



//Dado el arreglo de 5 elementos {10,20,30,45,55}, imprimir por pantalla cada elemento usando punteros.


void funcionArreglo(){

    int arregloElementos [] = {10,20,30,45,55};
    int *puntero;

    cout << "Los valores son: " <<endl;

    for (int i=0; i<5; i++){
        puntero=&arregloElementos[i];
        cout << "[" << *puntero << "]";
    }

}


//Dado dos arreglos de vocales array1 y array2, extraer la cantidad de vocales que se repiten entre los dos arreglos, usando punteros

void funcionVocales(){

    char vocales1[]={'a','e','i','o','u'}, *puntero1;
    char vocales2[]={'a','e','e','e','i','u'}, *puntero2;
    int n1=5;
    int n2=6;
    puntero1 = &vocales1[0];
    puntero2 = &vocales2[0];

    for (int i=0; i<5; i++){
        int contador=1;
        for (int j=0; j<6; j++){
            if (*(puntero1+i) == *(puntero2+j)){
                contador++;
            }

        }
        cout << "La vocal " << *(puntero1+i) << " se repite " << contador << " veces, en ambos arreglos" <<endl;

    }

}





