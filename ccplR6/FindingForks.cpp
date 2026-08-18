#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    long long minimo1 = 2e9;
    long long minimo2 = 2e9;
    while (cases--) {
        long long curr;
        cin >> curr;

        if (curr < minimo1) {
            minimo2 = minimo1; //guarde el min actual
            minimo1 = curr;    //actualiza
        }

        else if (curr < minimo2) //solo menor al 2do minimo
            minimo2 = curr;
    }
    cout << minimo1+minimo2;
}