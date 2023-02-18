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

    int numeros[100], n=0;
    cout<<"Cuantos numeros aleatorios quiere generar?: "<<endl;
    cin>>n;

    numerosAleatorios(numeros, n);
    frecuencia (numeros, n);
    histograma(numeros, n);


    return 0;
}

void numerosAleatorios(int numeros[], int n){
    srand(time(NULL));

    int inferior=0;
    int superior=25;


    cout<<"Numeros aleatorios: "<<endl;

    for (int i=0; i<n; i++){
        numeros[i]=inferior +rand()%(superior+1-inferior);
        cout<<"\nValor: "<<i+1<< ": "<<numeros[i]<<endl;
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

    srand(time(NULL));

    int inferior=0;
    int superior=25;
    int nuevoVector[100];
    int numeroNuevo[100];


    cout<<"\n\nNumeros aleatorios: "<<endl;

    for (int i=0; i<n; i++){
        numeros[i]=inferior +rand()%(superior+1-inferior);
        cout<<"["<<numeros[i]<<"],";
    }

    cout << "\n\nHistograma: "<<endl;
    cout << "Repeticion de cada numero en el arreglo: "<<endl;

    for (int j=0; j<n; j++){
        int contador=0;
        for (int k=0; k<n; k++){
        if (numeros[j]==numeros[k]){
            numeroNuevo[j]=numeros[j];
            contador++;


               }

        }


        cout << "El numero "<< numeroNuevo[j] << " se repite " << contador << " veces. "<<endl;
    }
    }


