#include <iostream>
using namespace std;

int main(){

    int a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;

    int inicio = (a * 60) + b;
    int final = (c * 60) + d;

    int duracion = final - inicio; // Conversion a formato entero
    int mitad = (duracion - n) /2 + (duracion - n) % 2;


    if(n >= duracion){
        cout << a << " " << b;
        return 0;
    }

    int inicioBreak = inicio + mitad;
    cout << inicioBreak / 60 << " " << inicioBreak % 60;
}
