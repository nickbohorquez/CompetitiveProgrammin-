#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    long double AP, PB, PC;
    cin >> AP >> PB >> PC ;
    // Calcular el Area:
    long double AB = AP + PB;
    long double area = (AB * PC)/2.0;
    // Calcular Perimetro
    long double BC = sqrt((PC * PC) + (PB * PB));
    long double CA = sqrt((AP * AP) + (PC * PC));
    cout << fixed << setprecision(9) << area << " " << AB + BC + CA;
}