#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int eligible = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= 5 - k) {
            eligible++;
        }
    }

    cout << eligible / 3 << endl;

    return 0;
}
