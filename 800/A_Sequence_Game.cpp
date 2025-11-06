#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        long long x;
        cin >> x;

        bool ok = false;
        if (n == 1) {
            ok = (a[0] == x);
        } else {
            for (int i = 0; i < n - 1; i++) {
                if (min(a[i], a[i + 1]) <= x && x <= max(a[i], a[i + 1])) {
                    ok = true;
                    break;
                }
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
