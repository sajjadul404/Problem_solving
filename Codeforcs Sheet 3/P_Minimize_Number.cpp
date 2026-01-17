#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = INT_MAX;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        int cnt = 0;
        while (x % 2 == 0) {
            x /= 2;
            cnt++;
        }

        ans = min(ans, cnt);
    }

    cout << ans;
    return 0;
}
