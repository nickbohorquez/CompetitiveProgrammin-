#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int square;
    string respuestaString = "[";
    cin >> square;
    for (long long i = 1; i <= square; i++) {

        respuestaString += to_string(i * i);
        if (i == square){
            respuestaString += "]";
        }
        else
            respuestaString += ", ";
    }
    cout << respuestaString;
}

//practicando el git diff