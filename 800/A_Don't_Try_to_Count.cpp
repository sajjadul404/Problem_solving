#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        if (x.find(s) != string::npos) {
            cout << 0 << "\n";
            continue;
        }

        string cur = x;
        int ops = 0;

        for (int i = 1; i <= 10; ++i) {
            cur += cur;
            ops++;

            if (cur.find(s) != string::npos) {
                cout << ops << "\n";
                goto END;
            }

            if ((int)cur.size() > 5000) break;
        }

        cout << -1 << "\n";

        END:;
    }

    return 0;
}
