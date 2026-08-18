#include <iostream>
#include <set>
using namespace std;

int main() {
    int x = 10;
    set <int> modulos;
    while (x--) {
        int valor;
        cin >> valor;
        {
            modulos.insert(valor%42);
        }
    }
    cout << modulos.size();
}