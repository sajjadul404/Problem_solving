#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int xorA = 0, xorB = 0;
        for (int i = 0; i < n; i++) {
            xorA ^= a[i];
            xorB ^= b[i];
        }

        int diffOdd = 0, diffEven = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if ((i + 1) % 2 == 1) {
                    diffOdd++;
                } else {
                    diffEven++;
                }
            }
        }

        if (xorA > xorB) {

            if (diffEven > diffOdd) {
                cout << "Mai\n";
            } else {
                cout << "Ajisai\n";
            }
        } else if (xorA < xorB) {

            if (diffOdd > diffEven) {
                cout << "Ajisai\n";
            } else {
                cout << "Mai\n";
            }
        } else {

            if (diffOdd > diffEven) {
                cout << "Ajisai\n";
            } else if (diffEven > diffOdd) {
                cout << "Mai\n";
            } else {
                cout << "Tie\n";
            }
        }
    }
    
    return 0;
}