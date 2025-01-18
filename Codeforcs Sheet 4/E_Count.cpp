#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int sum = 0;

    for (char c : S) {

        sum += c - '0';
    }

    cout << sum << endl;

    return 0;
}

