#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        char mx = 'a';
        for(char c : s) {
            if(c > mx) mx = c;
        }

        cout << (mx - 'a' + 1) << "\n";
    }
    return 0;
}
