/****************************************************
Autor: Annika Carl
Fecha: 08/02/2023
Tema: Funciones en C++ (CMATH)
******************************************************/

#include <iostream>
#include <cmath>    //librería que me permite acceder a funciones matematicas
using namespace std;

int main() {
  double num[3];
  cout<<"Ingrese sus 3 numeros: "<<endl;
  for (int i=0; i<3; i++){
    cout << i+1 << ": ";
    cin>> num[i];
    }

  cout <<"Raiz cuadrada de los numeros: "<<endl;
  for (int i=0; i<3; i++){
    cout<<"Raiz cuadrada del numero "<<num [i]<< " es: "<<sqrt(num[i]) << endl;
    }

    return 0;
}
