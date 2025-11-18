#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int odd_pos_even_val = 0;
        int even_pos_odd_val = 0;

        for (int i = 0; i < n; i++) {
            if ((i % 2) != (a[i] % 2)) {
                if (i % 2 == 0) even_pos_odd_val++;
                else odd_pos_even_val++;
            }
        }

        if (even_pos_odd_val != odd_pos_even_val) {
            cout << -1 << "\n";
        } else {
            cout << even_pos_odd_val << "\n";
        }
    }
    return 0;
}
