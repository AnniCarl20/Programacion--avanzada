#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int *ptr;

    cout << "Cuantos numeros desea?: ";
    cin >> n;

    ptr = new int [n];       //Memoria dinamica

    cout <<"Ingreso de numeros: " <<endl;
    for (int i=0; i<n; i++){
        cout <<i+1<< ": ";
        cin >> ptr [i]; // *(ptr+i)
    }

    //ordenar los numeros ingresados de mayor a menor. Método burbuja

    int aux=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-1; j++){   //va hasta n-1 porque una vez se repita el ciclo, ya tendré el mayor en la posicion n
            if (ptr[j] > ptr[j+1]){
                aux = ptr [j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=aux;
            }
        }
    }

    //imprimir
    cout <<"Ordenados de menor a mayor: "<<endl;
    for (int i=0; i<n; i++){
        cout << ptr [i] <<endl;

    }

    delete [] ptr;

    return 0;
}
