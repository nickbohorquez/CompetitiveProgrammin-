#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long positions, start, k1, k2, k3, k4, k5;
    cin >> positions >> start;
    vector<int> v (5);
    getline(cin, v);
    for (int i = 0; i < v.size(); i++){
        adelante = (start + v[i]) % positions;
        cout << adelante;
    }


}