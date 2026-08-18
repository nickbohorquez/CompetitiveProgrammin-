#include <iostream>
using namespace std;

int calcularPercent(int ingredient) {
    int result = 0;
    while (ingredient--) {
        int amount, alcoholPerc;
        cin >> amount >> alcoholPerc;
        result += amount * alcoholPerc;
    }
        return result;
}
int main() {

    int ingredientA, ingredientB;
    cin >> ingredientA >> ingredientB;

    int resultA = calcularPercent(ingredientA);
    int resultB = calcularPercent(ingredientB);

    if (resultA == resultB)
        cout << "same";
    else
        cout << "different";
}