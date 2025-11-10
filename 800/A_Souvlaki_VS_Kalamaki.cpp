#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        unordered_set<int> seen;
        bool has_duplicate = false;
        for (int x : a) {
            if (seen.count(x)) {
                has_duplicate = true;
                break;
            }
            seen.insert(x);
        }

        cout << (has_duplicate ? "YES" : "NO") << '\n';
    }
    return 0;
}
