#include <iostream>
using namespace std;

int main() {
    int boilingWater;
    cin >> boilingWater;
    int pressure = 5 * boilingWater - 400;
    cout << pressure << '\n';
    if (pressure > 100)
        cout << -1;
    else if(pressure == 100)
        cout << 0;
    else
        cout << 1;
}