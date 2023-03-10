#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct TipoPersonas{
string nombre;
string apellido;
int edad;
string profesion;
};

void abrirArchivo();
void leerArchivo();

int main(){

    abrirArchivo();
    leerArchivo();

return 0;
}


void abrirArchivo(){
    int n=0; TipoPersonas usuarios[100];
    ofstream archivo;
    archivo.open("usuarios.txt", ios::out);
    cout <<"Cantidad de usuarios que desea registrar: ";
    cin>>n;

    if(archivo.fail()){
        cout <<"No se pudo abrir el archivo";
        exit(1);
    }
    else{
        for (int i=0; i<n;i++){                              //Ciclo para digitar los nombres de los usuarios
            cout<<"Nombre del usuario "<<i+1<<": ";
            cin>>usuarios[i].nombre;
            archivo<< i+1<<": "<<usuarios[i].nombre<<endl;
        }
    }

    archivo.close();    //Siempre toca cerrarlo

}

void leerArchivo(){
    string texto;
    ifstream archivo;

    archivo.open("usuarios.txt", ios::in);

    if(archivo.fail()){                 //Asegurarse de que el archivo existe
        cout<<"Archivo no existe";
        exit(1);
    }

    while (!archivo.eof()){           //Mientras no sea el final de mi archivo
        getline(archivo, texto);
        cout<<texto<<endl;
    }
    archivo.close();

}
