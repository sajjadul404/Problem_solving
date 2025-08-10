#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost = k * w * (w + 1) / 2;

    int borrow = total_cost - n;

    cout << max(0, borrow) << endl;

    return 0;
}
