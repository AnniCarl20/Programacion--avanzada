
//Vector, imprimir el número que más se repita y la frecuencia.

#include<iostream>
using namespace std;

void funcion(int arreglo[], int tam);

int main(){

	int arreglo[100];
	int tam=0;

	cout<<"Ingrese el tamanio del vector: ";
	cin>> tam;

	for(int i=0;i<tam;i++){
		cout<<"Ingrese el valor en pos "<<i<<":  ";
		cin>> arreglo[i];
	}

	funcion (arreglo, tam);

return 0;

}


void funcion(int arreglo[], int tam){

    int temporal, aux, frecuencia=0, numero;

	for(int i=0; i<tam; i++){
		temporal = arreglo[i];
		aux = 0;
		for(int j=i; j<tam; j++){
			if(temporal == arreglo[j]){
				aux++;
			}
		}
		if(aux >= frecuencia){
			frecuencia = aux;
			numero = temporal;
		}
	}
	cout<< "\n\nEl numero mas repetido es el: " << numero <<endl;
	cout<< "Aparece " << frecuencia << " veces en el vector"<<endl;

}




