/**********************************************
Autor: Annika Carl
Tema: Punteros Taller

Ejercicio 01:
1.- Crear un array con 10 elementos
2.- Crear una función para generar números aleatorios entre 0 y 25
3.- Llenar el array con 10 números aleatorios
4.- Crear un puntero
5.- Imprimir el contenido del array usando el puntero
6.- Imprimir las direcciones del contenido del array usando el puntero.


************************************************/


#include <iostream>
#include<time.h>
#include <stdlib.h>   //Para random numbers
using namespace std;

void numerosAleatorios();


int main(){
    numerosAleatorios();
return 0;

}

void numerosAleatorios(){

    srand(time(NULL));    // Llama a time que lee el tiempo de reloj de nuestro PC y usa ese tiempo para inicializar los números aleatorios
    int numeros [10];     //arreglo
    int inferior=0;
    int superior=25;
    int *puntero;

    cout <<"Numeros aleatorios: "<<endl;

    for (int i=0; i<10; i++){                                         //Maximo 10 numeros

        numeros[i] = inferior + rand()%(superior+1 - inferior);       //Para que me reconozca el rango que voy a usar (0-100)
        puntero= &numeros[i];                                         //Igualo mi puntero a la dirección exacta de memoria
        cout << "\nValor: "<< numeros[i] << endl;
        cout << "Valor usando puntero: " << *puntero <<endl;


        cout << "Direccion de memoria: "<< puntero << endl;

    }

}
