#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int idx = min_element(a.begin(), a.end()) - a.begin();
    a[idx]++;

    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= a[i];
    }

    cout << product << endl;
    return 0;
}
