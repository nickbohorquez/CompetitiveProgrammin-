#include <iostream>
using namespace std;

int main() {
    int rows, columns, factr, factc;
    cin >> rows >> columns >> factr >> factc;
    string curr;
    for (int i =0; i<rows; i++) {                //recorre filas
        cin >> curr;
        for (int k = 0; k<factr; k++) {          //repite
            for (int j=0; j<columns; j++) {      //recorre columna (caracter)
                for (int l =0; l<factc; l++) {   //repite
                    cout<< curr[j];              // j = (caracter)
                }
            }
        cout<< "\n";
        }
    }
}