/**************************
Autor: Annika Carl
Fecha: 10/02/2023
Tema: Uso de punteros

***************************/

# include <iostream>
using namespace std;
int main (){
      int variableX=27;
      int *puntero;           //creación de variable puntero
      puntero=&variableX;

      cout <<"imprimir variable X: "<< variableX <<endl;
      cout <<"imprimir valor de puntero: "<< puntero <<endl;  // memoria, porque esta igualado a &
      cout <<"A que apunta mi puntero?: "<< *puntero<<endl;

return 0;
}
