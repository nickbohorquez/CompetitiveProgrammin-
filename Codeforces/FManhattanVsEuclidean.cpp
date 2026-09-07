#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long distanciaManhattan = llabs(x1 - x2 ) + llabs(y1 - y2);
    long long dx = x1 - x2;
    long long dy = y1 - y2;
    long long suma = (dx * dx) + (dy * dy);
    long double distanciaEuclidiana = sqrt(static_cast<double>(suma));
    cout << distanciaManhattan << '\n' << fixed << setprecision(6) << distanciaEuclidiana << endl;

}