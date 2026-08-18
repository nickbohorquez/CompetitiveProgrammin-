#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;
    for (int i = 0; i<word.size()/2; i++) {
        int j = word.size() - i - 1;
        if (word[i] != word[j]) {
            cout << "Nothing special about this string :(";
            return 0;

        }
    }
    cout << "Palindrome!";
}