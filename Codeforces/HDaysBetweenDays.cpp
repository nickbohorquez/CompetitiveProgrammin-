#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    int marzo = 30 - x, diciembre = y;// dias entre marzo y diciembre (exclusivo dia x, dia y)
    cout << 245 + (marzo + diciembre);
}