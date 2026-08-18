#include <iostream>
#include <map>
#include <pair>
using namespace std;

int main() {
    int cases = 3;
    map <int, int> freqx;
    map <int, int> freqy;
    pair<int, int> punto[3];

    while (cases--) {
        pair<int, int> punto;
        cin >> punto.first >> punto.second;
        freqx[punto.first]++;
        freqy.insert(punto.second)

    }
}