/**************************
Nombre: Annika Carl
Tema: POO
***************************/

#include <iostream>
# include <cmath>

using namespace std;

class Circulo {
    private:               //atributos
        float radio;

    public:                          //métodos
        Circulo (float radio){         //inicializo constructor
            this -> radio = radio;     // This apunta al objeto y le asigna el valor del radio
    }



    float area(){
        float A;
        A = 3.1416*(radio*radio);
        return A;
         }

    float perimetro(){
        float P;
        P = 2*3.1416*radio;
         return P;
        }

    float diametro(){
        float D;
        D = 2*radio;
         return D;
        }

};


class TrianguloRectangulo {

    float base;
    float angulo;

    public:
    TrianguloRectangulo (float base, float angulo){
        this -> base = base;
        this -> angulo = angulo;
    }


    float hipotenusa(){
        float h;
        h = base / (cos(angulo));
        return h;
        }

    float altura (){
        float a;
        a = base * tan(angulo);
        return a;
    }


    float perimetro(){
        float P;
        float a = altura();
        float h = hipotenusa();

        hipotenusa();
        P = base + a + h;
        return P;
    }


};



int main()
{
    float radio;
    float base;
    float angulo;
    float a;
    float h;

    int opcion;

    do {

    cout << "\n¿Que desea hacer?" << endl;
    cout << "1.- Calculos para el circulo " << endl;
    cout << "2.- Calculos para el triangulo rectangulo" << endl;
    cin >> opcion;

    switch (opcion){

        case 1:
            {
            cout <<"\nIngrese el radio del circulo: " <<endl;
            cin >> radio;

            Circulo Circulo (radio);    //Pone el radio en el objeto

            cout << "Area: " << Circulo.area() <<endl;
            cout << "Perimetro: " << Circulo.perimetro() <<endl;
            cout << "Diametro: " << Circulo.diametro() <<endl;
            }
            break;


        case 2:
            {
            cout <<"\nIngrese la base del triangulo rectangulo: " <<endl;
            cin >> base;
            cout <<"Ingrese el angulo del triangulo rectangulo: " <<endl;
            cin >> angulo;
            angulo = (angulo*3.1416)/180;

            TrianguloRectangulo TrianguloRectangulo (base, angulo);

            cout << "Hipotenusa: " << TrianguloRectangulo.hipotenusa() << endl;
            cout << "Altura: " << TrianguloRectangulo.altura() << endl;
            cout << "Perimetro: " << TrianguloRectangulo.perimetro() << endl;
            }
            break;


        default:
            cout << "Ha ingresado un numero incorrecto" <<endl;
            break;

        }
    }

    while (opcion != 0);



    return 0;
}
