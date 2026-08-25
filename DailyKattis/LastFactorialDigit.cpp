#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n-1);
}

int main() {
    int t, b;
    cin >> t;
    while(t--) {
        cin >> b;
        cout << factorial(b) % 10 << "\n";
    }
}


