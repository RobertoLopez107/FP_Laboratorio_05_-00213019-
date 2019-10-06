#include <iostream>

using namespace std;

int main(){
  int total;
  cout<<"Ingrese el total de datos: ";
  cin>>total;
  float aux, suma=0, i;
  for(i=0;i<total;i++)
    {
    cout<<"Ingrese el dato: "<<(i+1)<<" : ";
    cin>>aux;
    suma=suma+=aux;
    }

cout<<"El valor de la media es :"<<(suma/total);

}