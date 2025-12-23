#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long total = 0;
        for (int i = 0; i + 1 < n; i++) {
            total += llabs(a[i] - a[i + 1]);
        }

        long long ans = total;

        ans = min(ans, total - llabs(a[0] - a[1]));

        ans = min(ans, total - llabs(a[n - 2] - a[n - 1]));

        for (int i = 1; i + 1 < n; i++) {
            long long delta =
                llabs(a[i - 1] - a[i]) +
                llabs(a[i] - a[i + 1]) -
                llabs(a[i - 1] - a[i + 1]);

            ans = min(ans, total - delta);
        }

        cout << ans << '\n';
    }
    return 0;
}
