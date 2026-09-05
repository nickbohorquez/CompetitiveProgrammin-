#include <iostream>
#include <map>
using namespace std;

int main() {
    string letra;
    cin >> letra;
    map <string, int> calificaciones = {
        {"A", 4},
        {"B", 3},
        {"C", 2},
        {"D", 1},
        {"F", 0}
    };
    cout << calificaciones[letra];
}