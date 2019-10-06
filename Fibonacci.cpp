#include <iostream>     //Fibonachi
using namespace std;

int main(){
    int termino = 0, a = 0, b = 1;
    cout << "Termino: ";
    cin >> termino;

    for(int i = 0; i < termino; i++){
        int c = a + b;
        a = b;
        b = c;
        cout<<c;
    }

    cout << "Respuesta: " << (termino==0?0:a) << endl;
    return 0;
}
