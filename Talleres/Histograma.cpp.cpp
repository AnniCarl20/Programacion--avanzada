/**************************
Autor: Annika Carl
Fecha: 15/02/2023
Tema:
Generar numeros aleatorios
contar la frecuencia
graficar histrograma
***************************/

#include <iostream>
#include <time.h>
#include <stdlib.h>

void numerosAleatorios(int numeros[], int n);
void frecuencia (int numeros[], int n);
void histograma(int numeros[], int n);

using namespace std;

int main()
{
    int opciones=0;
    int seguir=1;
    int numeros[100], n=0;

    do{
    cout<<"1. Generar arreglo de numeros aleatorios "<<endl;
    cout<<"2. Numero de mayor frecuencia"<<endl;
    cout<<"3. Histograma "<<endl;
    cin>>opciones;

    switch (opciones){
    case 1: cout<<"Cuantos numeros aleatorios quiere generar?: "<<endl;
            cin>>n;
            numerosAleatorios(numeros, n);
    break;
    case 2: frecuencia (numeros, n);
    break;
    case 3: histograma(numeros, n);
    break;
    }

    cout <<"\n\nDesea continuar? 1. (si), 0 (no)"<<endl;
    cin >>seguir;

    } while (seguir==1);


    return 0;
}

void numerosAleatorios(int numeros[], int n){
    srand(time(NULL));

    int inferior=0;
    int superior=25;


    cout<<"Numeros aleatorios: "<<endl;

    for (int i=0; i<n; i++){
        numeros[i]=inferior +rand()%(superior+1-inferior);
        cout<<" ["<<numeros[i]<< "] ";
    }
}


void frecuencia (int numeros[], int n){
    int temporal, aux, frecuencia=0, numeroFrecuente;

    for (int i=0; i<n; i++){
        temporal=numeros[i];
        aux=0;
        for (int j=i; j<n; j++){
            if (temporal==numeros[j]){
                aux++;
            }
        }
        if (aux>=frecuencia){
            frecuencia=aux;
            numeroFrecuente=temporal;
        }
    }
    cout<<"\nEl numero que mas se repite en el vector es: "<<numeroFrecuente<<endl;
    cout<<"Veces que aparece en el arreglo: "<<frecuencia;
}


void histograma(int numeros[], int n){

    cout << "\n\nHistograma: "<<endl;
    cout << "Repeticion de cada numero en el arreglo: "<<endl;


    int frecuencia[25] = {0};  // Inicializar el arreglo de frecuencias en cero

    for (int i=0; i<n; i++) {
        frecuencia[numeros[i]] ++;  // Incrementar la frecuencia del número correspondiente
    }

    for (int i=0; i<25; i++) {
        cout << i << ": ";

        for (int j=0; j<frecuencia[i]; j++) {  //imprimo * hasta el tamaño que indique mi frecuencia de cada numero
            cout << "*";

        }
            cout << "\n";
    }
}






