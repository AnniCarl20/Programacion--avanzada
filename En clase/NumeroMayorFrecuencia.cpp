/*********************************************************************************
Autor: Annika Carl
Fecha: 27/01/2023
Problema: Crear un arreglo, imprimir el n�mero que m�s se repita y la frecuencia.
*********************************************************************************/

#include<iostream>
using namespace std;

void funcion(int arreglo[], int tam);

int main(){

	int arreglo[100];
	int tam=0;

	cout<<"Ingrese el tamanio del vector: ";
	cin>> tam;

	for(int i=0;i<tam;i++){
		cout<<"Ingrese el valor en pos "<<i<<":  ";   //Le pido al usuario que ingrese los numeros que desea
		cin>> arreglo[i];
	}

	funcion (arreglo, tam);         //Llamo la funci�n

return 0;

}


void funcion(int arreglo[], int tam){

    int temporal, aux, frecuencia=0, numero;

	for(int i=0; i<tam; i++){
		temporal = arreglo[i];           //Guardo mi valor en la posicion i en temporal
		aux = 0;
		for(int j=i; j<tam; j++){
			if(temporal == arreglo[j]){        //Si ese valor coincide con otro m�s adelante
				aux++;                         //Aumento el contador (como ambos comienzan en 0, compara la primera posicion con la primera
			}                                  //Por eso no pongo contador = 1
		}
		if(aux >= frecuencia){                 //Algoritmo de comparaci�n de n�meros mayores
			frecuencia = aux;
			numero = temporal;
		}
	}
	cout<< "\n\nEl numero mas repetido es el: " << numero <<endl;
	cout<< "Aparece " << frecuencia << " veces en el vector"<<endl;

}



