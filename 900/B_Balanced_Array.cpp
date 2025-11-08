#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if ((n / 2) % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<int> a;

        for (int i = 1; i <= n / 2; ++i)
            a.push_back(i * 2);

        for (int i = 1; i < n / 2; ++i)
            a.push_back(i * 2 - 1);

        a.push_back(3 * (n / 2) - 1);

        for (int i = 0; i < n; ++i)
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
    }
    return 0;
}
