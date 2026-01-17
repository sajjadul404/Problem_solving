#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int balance = 0;
    int count = 0;

    for (char c : s) {
        if (c == 'L') balance++;
        else balance--;

        if (balance == 0) count++;
    }

    cout << count << endl;

    balance = 0;
    string current = "";

    for (char c : s) {
        current += c;
        if (c == 'L') balance++;
        else balance--;

        if (balance == 0) {
            cout << current << "\n";
            current = "";
        }
    }

    return 0;
}
