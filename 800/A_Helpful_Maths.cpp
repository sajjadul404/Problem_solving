#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count[4] = {0}; 

    for (int i = 0; i < s.length(); i += 2) {
        int num = s[i] - '0';
        count[num]++;
    }
    bool first = true;
    for (int i = 1; i <= 3; ++i) {
        while (count[i]--) {
            if (!first) cout << "+";
            cout << i;
            first = false;
        }
    }

    return 0;
}
