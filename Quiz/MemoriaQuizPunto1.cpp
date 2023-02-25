/******************************************
Se tienen dos arreglos de tamaño desconocido.
Se le pregunta al usuario por este valor
Se llenan ambos con valores aleatorios
¿Cuántos valores son iguales?
**************************************************/

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main (){

    int n1, n2;          //Tamaños de mis arreglos;
    int *ptr1, *ptr2;   //Apuntadores

    cout << "Ingrese el tamanio del arreglo 1: ";
    cin >> n1;
    cout << "Ingrese el tamanio del arreglo 2: ";
    cin >> n2;

    ptr1=new int [n1];      //Arreglo con la memoria de ingresa el usuario
    ptr2=new int [n2];

    //Llenar arreglos con numeros aleatorios

    srand(time(NULL));

    int inferior=0;
    int superior=10;

    cout<<"\nNumeros aleatorios arreglo 1: "<<endl;

    for (int i=0; i<n1; i++){
        ptr1 [i] = inferior +rand()%(superior+1-inferior);
        cout<<" ["<< ptr1 [i]<< "] ";
    }

    srand(time(NULL));

    cout<<"\n\nNumeros aleatorios arreglo 2: "<<endl;

    for (int i=0; i<n2; i++){
        ptr2 [i] = 1+rand()%(11-1);
        cout<<" ["<< ptr2 [i]<< "] ";
    }


    // Valores repetidos

    for (int i=0; i<n1; i++){
        int contador=1;
        for (int j=0; j<n2; j++){
            if (ptr1[i] == ptr2[j]){
                contador++;
            }

        }
        cout << "\n";
        cout << "El numero " << ptr1[i] << " se repite " << contador << " veces, en ambos arreglos" <<endl;

    }


    delete [] ptr1;
    delete [] ptr2;

    return 0;
}
