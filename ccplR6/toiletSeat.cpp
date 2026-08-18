#include <iostream>
using namespace std;

int main() {
    string linea;
    cin >> linea;
    char primer = linea[0];
    char tapa1 = primer;
    char tapa2 = primer;
    char tapa3 = primer;
    int policy1=0, policy2=0, policy3 = 0;
    for (int i = 1; i<linea.size();i++) { //change the policy --> doesn't comply
        //policy1
        char persona = linea[i];
        if (tapa1 != persona) {  //Primer estado (entra)
            policy1++;
            tapa1 = persona;
        }
        if (persona != 'U') {
            //Segundo estado (debe subir la tapa)
            policy1++;
            tapa1='U';
        }

        //policy2
        if (tapa2 != persona) {  //
            policy2++;
            tapa2 = persona;
        }

        if (persona != 'D') {
            policy2++;
            tapa2 = 'D';
        }

        //policy3
        if (tapa3 != persona) {
            policy3++;
            tapa3 = persona;
        }
    }
    cout << policy1 << "\n" << policy2 << "\n" << policy3;

}