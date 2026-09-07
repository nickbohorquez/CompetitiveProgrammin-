#include <iostream>
using namespace std;

int main(){
    int d, c;
    cin >> d >> c;
    long ans = (d * 50) - (c * 10);
    if (d > c)
        ans += 500;
    cout << ans;
}