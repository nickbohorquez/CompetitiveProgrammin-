#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    long double x;
    cin >> x;

    long double ax = fabsl(x);

    // 1. Valor absoluto
    cout << fixed << setprecision(2) << ax << "\n";

    // 2. Raíz truncada
    long double r = sqrtl(ax);
    long long rt = (long long)(r * 100);
    cout << rt / 100 << "." << setw(2) << setfill('0') << rt % 100 << "\n";

    // 3. Floor
    cout << (long long)floorl(x) << "\n";

    // 4. Ceiling
    cout << (long long)ceill(x) << "\n";

    // 5. Round
    cout << (long long)roundl(x) << "\n";

    return 0;
}