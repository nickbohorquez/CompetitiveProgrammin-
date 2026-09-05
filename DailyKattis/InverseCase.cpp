#include <iostream>
using namespace std;

int main() {
    string word;
    getline(cin, word);
    for (char &c : word){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            c ^= 32;
        }
    }
    cout << word;
}