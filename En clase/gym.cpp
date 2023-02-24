/**************************
ESTRUCTURAS:
Un gym necesita hacer el registro de usuarios.
La cantidad de registros debe ser indicada al principio
Se debe imprimir los nombres de los usuarios con registro satisfactorio
***************************/

#include <iostream>
using namespace std;

struct TipoUsuario{
    string nombre;
    string apellido;
    char genero;
    string fecha;
    int edad;
    int hijos;
    float masaMuscular;
    float altura;
    string lesiones;
    int franjaHoraria;
    int plan;
};


void funcion (TipoUsuario usuarios[], int n);
void registroSatisfactorio (TipoUsuario usuarios[], int n);

int main()
{
    int n=0;
    TipoUsuario usuarios[100];
    cout<<"******"<<endl;
    cout<<"BIENVENIDO AL GYM"<<endl;
    cout<<"******"<<endl;

    cout<<"Ingrese la cantidad de usuarios que quiere registrar: ";
    cin>>n;

    funcion (usuarios, n);
    registroSatisfactorio (usuarios, n);

    return 0;
}


void funcion (TipoUsuario usuarios[], int n){

    int opcion, opcionPlan;
    string descripcionLesion;
    char texto[100];

    for (int i=0; i<n;i++){

            cout<<"\n\nUsuario numero "<<i+1<<endl;

            cout<<"Ingrese el nombre: ";
            cin>> usuarios[i].nombre;
            cout<<"Ingrese el apellido: ";
            cin>> usuarios[i].apellido;
            cout<<"Ingrese la edad: ";
            cin>> usuarios[i].edad;
            cout<<"Genero (F para mujer, M para hombre): ";
            cin>>usuarios[i].genero;

            if (usuarios[i].genero != 'M'||'F'){                                         //PREGUNTARi
                cout<<"Ha ingresado un dato invalido. Intentelo de nuevo: " <<endl;
                cout<<"Genero (F para mujer, M para hombre): ";
                cin>>usuarios[i].genero;
            }

            cout<<"Fecha de inscripcion: ";
            cin>>usuarios[i].fecha;
            cout<<"Cantidad de hijos: ";
            cin>>usuarios[i].hijos;
            cout<<"Masa muscular (en kg): ";
            cin>>usuarios[i].masaMuscular;
            cout<<"Altura (en cm): ";
            cin>>usuarios[i].altura;

            cout<<"Seleccione el horario en la que desea entrenar: " <<endl;
            cout<<"Lunes, martes, jueves de 2-5pm (1)"<<endl;;
            cout<<"Martes, jueves y viernes de 3-6pm (2)"<<endl;;
            cout<<"Miercoles, jueves y viernes de 8-11am (3)\n"<<endl;;
            cin>>opcion;

            switch(opcion){
                case 1: cout <<"Ha elegido la opcion 1"<<endl;
                break;
                case 2: cout <<"Ha elegido la opcion 2"<<endl;
                break;
                case 3: cout <<"Ha elegido la opcion 3"<<endl;
                break;
                default: cout <<"Ingreso una opcion invalida"<<endl;
                break;
            }

            opcion=usuarios[i].franjaHoraria;


            cout<<"\n\nSeleccione el plan: "<<endl;
            cout<<"Basico (1)"<<endl;
            cout<<"Premium (2)"<<endl;
            cout<<"VIP (3)\n"<<endl;
            cin>>opcionPlan;

            switch(opcionPlan){
                case 1: cout <<"Basico";
                break;
                case 2: cout <<"Premium";
                break;
                case 3: cout <<"VIP";
                break;
                default: cout <<"Ingreso una opcion invalida"<<endl;
                break;
            }

            opcionPlan=usuarios[i].plan;

            cout<<"\n\nTiene lesiones? Responda si o no: ";
            cin>>usuarios[i].lesiones;

            if(usuarios[i].lesiones=="si"){
                cout<<"Que lesion tiene?: ";
                cin>>texto;
            }


        }
    }

void registroSatisfactorio (TipoUsuario usuarios[], int n){

    string sino;

    cout<<"\n\nDesea ver los usuarios registrados? Responda si o no: "<<endl;
    cin>>sino;

    if (sino=="si"){
    cout <<"\n\nLos usuarios registrados son: "<<endl;;
        for (int i=0; i<n; i++){
        cout<<i+1<<": ";
        cout<<usuarios[i].nombre<< " " << usuarios[i].apellido<<endl;
        }
    }
    else{
        exit(0);
    }
}
