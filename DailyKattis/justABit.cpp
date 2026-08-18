#include <iostream>
using namespace std;

int main() {
    string numero;
    cin >> numero;
    int cero = 0, uno = 0;
    for (int i = 0; i < numero.size(); i++) {
        if (numero[i] == '0') {
            cero++;
        }
        else
            uno++;
    }
    cout << cero << " " << uno;
}