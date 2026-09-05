#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int invertido = 0;
    while (n>0) {
        invertido <<= 1;
        invertido |= (n&1);
        n >>= 1;
    }
    cout << invertido;
}