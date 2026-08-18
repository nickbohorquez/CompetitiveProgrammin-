#include <iostream>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    int respuesta = 0;
    while (cases--) {
        int have, need, cost;
        cin >> have >> need >> cost;
        if (need > have)
            respuesta += (need - have)*cost;
    }
    cout << respuesta;
}