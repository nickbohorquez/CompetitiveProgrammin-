#include <iostream>
using namespace std;

int main() {
    string entrada;
    getline(cin, entrada);
    string iniciales;
    for (int i = 0; i<entrada.size();i++) {
        if ( i == 0 || entrada[i-1] == ' ')
            iniciales += entrada[i];
    }
    if (iniciales == "ICPC")
        cout << 1;
    else
        cout << 0;
}