#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<int> x = {a, b, c, d};
        bool ans = true;
        for (int i = 1; i < x.size(); i++) {
            if (x[i] != x[i - 1]) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
