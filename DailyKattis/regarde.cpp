#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "shh";
        s.append(n-1, 'h');
        cout << s << '\n';
    }
}