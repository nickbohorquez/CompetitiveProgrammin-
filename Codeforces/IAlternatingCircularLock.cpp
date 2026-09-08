#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long modulo, position;
    cin >> modulo >> position;

    vector <long long> k (5);
    for (int i = 0; i < 5; i++) {
        cin >> k[i];
    }

    for (int i = 0; i < k.size(); i++) {
        long long step = k[i] % modulo;
        if (i%2==0)
            position = (position + step) % modulo;
        else
            position = (position + modulo - step) % modulo;
        cout << position << (i == k.size() - 1 ? "" : " ");
    }
}