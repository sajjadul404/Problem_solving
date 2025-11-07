#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int max_diff = 0;
        for (int i = 0; i < n; ++i)
            max_diff = max(max_diff, a[i] - b[i]);

        cout << max_diff << endl;
    }
    return 0;
}
