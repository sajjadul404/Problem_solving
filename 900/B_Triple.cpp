#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cnt(n + 1, 0);
        int ans = -1;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
            if (cnt[x] == 3 && ans == -1) {
                ans = x;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
