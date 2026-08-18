#include <iostream>
#include <vector>
#include <algorithm> // Necesario para usar sort()

using namespace std;

void resolver() {
    vector<int> tokens(3);
    cin >> tokens[0] >> tokens[1] >> tokens[2];
    
    int rondas = 0;
    
    while (true) {
        // Ordenamos los 3 números para saber quién es el menor y el mayor
        sort(tokens.begin(), tokens.end());
        
        // Si el primero es igual al segundo, O el segundo es igual al tercero, el juego termina
        if (tokens[0] == tokens[1] || tokens[1] == tokens[2]) {
            break; 
        }
        
        // El jugador con más tokens (tokens[2]) le da uno al que tiene menos (tokens[0])
        tokens[2] -= 1;
        tokens[0] += 1;
        rondas++;
    }
    
    cout << rondas << "\n";
}

int main() {
    // Optimización de entrada/salida que ya aprendiste
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        resolver();
    }
    
    return 0;
}
