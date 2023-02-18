/****************
Autor: Annika Carl
Tema: Punteros Taller

Ejercicios 02:
Se desea capturar los datos de los clientes para ser impreso en la factura. Se requiere
crear una estructura de datos, que encapsule los datos de los usuarios. Se requiere que
el uso de la estructura sea a través de punteros. Se requiere imprimir las facturas en
un fichero de texto.

****************/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;


struct TipoClientes{
    string nombre;
    long double cedula;
    string fecha;
    string lugar;

};

void abrirArchivo(TipoClientes usuarios[], int n);   //Declaro mis funciones
void leerArchivo();


int main(){
    int n;
    TipoClientes usuarios[100];

    abrirArchivo(usuarios,n);
    leerArchivo();


return 0;
}


void abrirArchivo(TipoClientes usuarios[], int n){

    TipoClientes *puntero;      //Declaro mi puntero
    puntero =  &usuarios[0];   //variable puntero apunta a donde he guardado mis elementos, desde la posición 0

    ofstream archivo;
    archivo.open ("factura.txt", ios::out|ios::app);                 //Abro un archivo llamado factura
    cout << "BIENVENIDO"<<endl;
    cout << "A continuacion podra registrar los clientes: "<<endl;
    cout <<"Cantidad de usuarios que desea registrar: ";
    cin >> n;

    if(archivo.fail()){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }

    else{

            archivo << "FACTURACION" <<endl;

        for (int i=0; i<n;i++){                             //Ciclo dependiendo de la cantidad de usuarios que quiera registrar
            cout<<"\nNombre del usuario: ";
            cin>> puntero->nombre;                          //variable puntero, va a la estructura, en la posicion de nombre.
            cout<<"Cedula: ";
            cin>>puntero->cedula;
            cout<<"Fecha de la compra: ";
            cin>>puntero->fecha;
            cout<<"Ciudad donde se realiza: ";
            cin>>puntero->lugar;

            archivo << "\nUsuario: "<< endl;
            archivo << "Nombre: " <<puntero->nombre<<endl;
            archivo << "Cedula: " <<puntero->cedula<<endl;
            archivo << "Fecha: " <<puntero->fecha<<endl;
            archivo << "Ciudad: " <<puntero->lugar <<endl;

        }
    }

    archivo.close();

}

void leerArchivo(){
    string texto;
    ifstream archivo;

    archivo.open("factura.txt", ios::in);

    if(archivo.fail()){
        cout<<"Archivo no existe";
        exit(1);
    }

    while (!archivo.eof()){
        getline(archivo, texto);
        cout<<texto<<endl;
    }
    archivo.close();

}



