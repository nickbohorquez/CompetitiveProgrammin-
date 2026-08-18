#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;

int main(){

    unordered_map <string, string> gemas;

    gemas.insert({"red", "Reality"});
    gemas.insert({"purple", "Power"});
    gemas.insert({"green", "Time"});
    gemas.insert({"yellow", "Mind"});
    gemas.insert({"orange", "Soul"});
    gemas.insert({"blue", "Space"});


    int t; cin >> t;

    unordered_map<string, string> faltantes = gemas;
    while(t--){

        string faltante;
        cin >> faltante;
        faltantes.erase(faltante);
    }


    cout << 6 - t << "\n";
    for(auto par: faltantes)
        cout << par.second << "\n";
}

