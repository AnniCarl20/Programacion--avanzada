/**************************
Nombre: Annika Carl
Tema: POO
***************************/

#include <iostream>

using namespace std;

//Clase general

class Persona {
    private:               //atributos
        string nombre;
        string apellido;
        int edad;
        string ocupacion;
        string deporteFavorito;


    public:                                                                                                  //métodos
        Persona (string nombre, string apellido,int edad, string ocupacion, string deporteFavorito){         //inicializo constructor
            this -> nombre = nombre;                                                                         //This me permite acceder a los datos miembros de la clase
            this -> apellido = apellido;
            this -> ocupacion = ocupacion;
            this -> deporteFavorito = deporteFavorito;
            this -> edad = edad;

    }


    //INICIO FUNCIONES DE ESTA CLASE

    //Esta función me permite obtener el nombre (que está privado en esta clase), en las otras clases para que se puedan presentar

     string getNombre() {
        return nombre;
    }

    string getApellido() {
        return apellido;
    }

    //La persona va a presentarse

    void presentarse (){
        cout << "Hola, mi nombre es " << getNombre() << " " << getApellido() << ". Tengo " << edad << " anios. Me gusta mucho el " << deporteFavorito <<endl;
    }
};


// CLASE PROFESOR

class Profesor: public Persona{
    private:
        string materia;
        string titulo;
        int aniosEnse;

     public:
        Profesor(string nombre, string apellido, int edad, string ocupacion, string deporteFavorito, string materia,string titulo, int aniosEnse)
        : Persona(nombre, apellido, edad, ocupacion, deporteFavorito) {

            this -> materia = materia;
            this -> titulo = titulo;
            this -> aniosEnse = aniosEnse;
        }


        // Profesor se va a presentar

        void presentarse(){
            cout << "Hola, mi nombre es " << getNombre() << " " << getApellido() << ". Sere su profesora de " << materia << endl;
        }

};

 // CLASE ESTUDIANTE

class Estudiante: public Persona{
    private:
        string materiaFavorita;
        int grado;

     public:
        Estudiante(string nombre, string apellido, int edad, string ocupacion, string deporteFavorito, string materiaFavorita, int grado)
        : Persona(nombre, apellido, edad, ocupacion, deporteFavorito) {

            this -> materiaFavorita= materiaFavorita;
            this -> grado = grado;
        }

        //Estudiante se va a presentar

        void presentarse(){
            cout << "Hola, mi nombre es " << getNombre() << " " << getApellido() << ". Mi materia favorita es " << materiaFavorita << endl;
        }


        //Conocer si puede o no cursar programacion

        bool puedeCursarProgra() {
            if (grado > 8) {
                return true;
                }

            else {
                return false;
                }
        }
};



int main (){

    // Objetos definidos

    Persona Pe1 ("Annika", "Carl", 18, "estudiante", "basketball");
    Profesor P1("Ana","Correa",35,"maestra","natacion","matematicas","matematica",3);
    Estudiante E1("Juanes", "Cortes", 14, "estudiante", "crossfit", "programacion",10);
    Estudiante E2("Sofia", "Carvajal", 17, "estudiante", "voley", "ingles", 8);
    Estudiante E3("Fernando", "Diaz", 15, "estudiante", "basket", "matematicas", 6);

    cout << "Presentacion de personas: " <<endl;
    Pe1.presentarse();

    cout << "\nPresentacion de profesores: " <<endl;
    P1.presentarse();

    cout << "\nPresentacion de estudiantes: " <<endl;
    E1.presentarse();
    E2.presentarse();
    E3.presentarse();

    cout <<"\nQue estudiante puede cursar programacion?: " <<endl;


      if (E1.puedeCursarProgra()) {
        cout << "El estudiante " << E1.getNombre() << " " << E1.getApellido() << " puede cursar programacion." << endl;
        }

    else {
        cout << "El estudiante " << E1.getNombre() << " " << E1.getApellido() << " NO puede cursar programacion." << endl;
    }



return 0;
}
