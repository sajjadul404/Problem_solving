#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        for (int d = x / 2; d >= 1; d--) {
            if (x % d == 0) {
                cout << x - d << '\n';
                break;
            }
        }
    }
    return 0;
}
