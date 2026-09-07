#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector <int> numeros = {1, 3, 5, 8, 12};
    int target = 4;
///////////////////////////////////////////////////////////////////////////////////
///                             Version iterativa                               ///
///////////////////////////////////////////////////////////////////////////////////
    /*
    for (int i = 0; i < numeros.size(); i++){
        for (int j = i + 1; j < numeros.size(); j++){
            if (numeros[i] + numeros[j] == target)
                cout << i << " " << j << '\n';
        }
    }
    return 0;
*/

///////////////////////////////////////////////////////////////////////////////////
///                             Version HashMap                                 ///
///////////////////////////////////////////////////////////////////////////////////

    vector <int> ans;
    int complemento = 0;
    unordered_map <int, int> numsIndex;
    for (int i = 0; i < numeros.size(); i++){
        int complemento = target - numeros[i];
        auto actual = numsIndex.find(complemento);     // El metodo .find() usa ITERATOR, usamos auto.
        if (numsIndex.count(complemento)){
            cout << numsIndex[complemento] << " " << i << endl;
        }
        numsIndex.insert({numeros[i], i});
        }
    }




