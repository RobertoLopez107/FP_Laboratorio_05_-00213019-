#include <iostream>
#include <cmath>

using namespace std;

void suma(int a, int b){
    cout << "Resultado: " << (a+b) << endl;
}
void resta(int a, int b){
    cout << "Resultado: " << (a-b) << endl;
}
void mult(int a, int b){
    cout << "Resultado: " << (a*b) << endl;
}
void diventera(int a, int b){
    cout << (b==0 ? "Error" : ("Resultado: " + (a/b))) << endl;
}
void modulo(int a, int b){
    cout << "Resultado: " << (a%b) << endl;
}
void divnormal(int a, int b){
    if(b==0)
        cout << "Error, div entre cero!!!" << endl;
    else
        cout << "Resultado: " << (a/(b*1.0)) << endl;
}

int main(){
    int a = 0, b = 0;
    cout << "Digite a: ";
    cin >> a;
    cout << "Digite b: ";
    cin >> b;

    int opcion = 0;
    cout << "Menu:\n\t1)Suma\n\t2)Resta\n\t3)Multiplicacion";
    cout << "\n\t4)Div entera\n\t5)Modulo\n\t6)Div normal";
    cout << "\n\tOpcion elegida: ";
    cin >> opcion;

    switch(opcion){
        case 1: suma(a, b); break;
        case 2: resta(a, b); break;
        case 3: mult(a, b); break;
        case 4: diventera(a, b); break;
        case 5: modulo(a, b); break;
        case 6: divnormal(a, b); break;
        default: cout << "Opcion invalida" << endl;
    }
    cout << "Buenos dias" << endl;

    return 0;
}
