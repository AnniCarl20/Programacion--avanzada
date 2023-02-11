/****************************************************
Autor: Annika Carl
Fecha: 08/02/2023
Tema: Tamaño de los tipos de variables
******************************************************/


#include <iostream>
using namespace std;

int main() {
    cout << "Tamanio en bytes de cada tipo de variable: "<<endl;
    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"short: "<<sizeof(short)<<endl;
    cout<<"int: "<<sizeof(int)<<endl;
    cout<<"long: "<<sizeof(long)<<endl;
    cout<<"string: "<<sizeof(string)<<endl;
    cout<<"float: "<<sizeof(float)<<endl;
    cout<<"long double: "<<sizeof(long double)<<endl;

    return 0;
}
