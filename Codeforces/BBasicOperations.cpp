#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long suma = a+b;
    long long resta = a-b;
    long long piso = a/b;
    long long residuo = a%b;
    if (residuo != 0 && ((a < 0) != (b < 0)))
        piso--;

    long long modulo = a - (piso*b);
    long long multiplication = a*b;

    cout << suma << '\n'
    << resta << '\n'
    << piso << '\n'
    << modulo << '\n'
    << multiplication << '\n';
    printf("%.6f\n", double(a)/b);

    long long techo = a/b;
    if (residuo != 0 && ((a > 0) == (b > 0)))
        techo++;

    cout << techo << '\n';
}