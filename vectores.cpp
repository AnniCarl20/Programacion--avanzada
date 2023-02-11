/****************
Autor: Annika Carl
Fecha: 08/02/2023
Tema: Uso de vectores
*****************/

#include <iostream>
#include <vector>     //librería que me permite acceder a funciones de vectores
using namespace std;

int main() {

  vector <int> numeros;   //numeros: nombre vector
  numeros.assign (5,1);   //5 espacios, llenarlo de "unos" (1)

  cout<<"Vector original: "<<endl;
  for (int i=0; i<numeros.size(); i++){
  cout<< "["<<numeros[i]<< "] ";
  }

  numeros.insert(numeros.begin(),5);   //desde el comienzo, insertar un 5

  cout<<"\n\nNuevo vector (5 insertado): "<<endl;
  for (int i=0; i<numeros.size(); i++){  //el numeros.size me permite almacenar otro valor sin necesidad de darle un tamaño fijo al inicio
  cout<< "["<<numeros[i]<< "] ";

  }

  numeros.pop_back();   //Elimina elemento de la parte inferior

  cout<<"\n\nNuevo vector (1 eliminado al final): "<<endl;
  for (int i=0; i<numeros.size(); i++){
  cout<< "["<<numeros[i]<< "] ";

  }

  numeros.push_back(2);   //Reemplaza 1 con 2 al final

  cout<<"\n\nNuevo vector (2 abajo): "<<endl;
  for (int i=0; i<numeros.size(); i++){
  cout<< "["<<numeros[i]<< "] ";
  }

  cout<<"\n\nTamanio actual del vector: "<<numeros.size()<<endl;

  numeros.erase(numeros.begin());
  cout<<"\nNuevo vector (5 eliminado): "<<endl;
  for (int i=0; i<numeros.size(); i++){
  cout<< "["<<numeros[i]<< "] ";
  }

  cout<<"\n\nTamanio actual del vector: "<<numeros.size()<<endl;



return 0;
}
