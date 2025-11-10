#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n % 2 == 0) {
            cout << "YES\n";
        } else {
            bool duplicate = false;
            for (int i = 1; i < n; i++) {
                if (a[i] <= a[i-1]) {
                    duplicate = true;
                    break;
                }
            }
            cout << (duplicate ? "YES\n" : "NO\n");
        }
    }
    return 0;
}