#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long ans = LLONG_MAX;
        long long minPrefix = A[0] - 1; 
        for (int j = 1; j < N; j++) {
            long long current = minPrefix + A[j] + (j + 1);
            ans = min(ans, current);

            minPrefix = min(minPrefix, A[j] - (j + 1));
        }

        cout << ans << '\n';
    }

    return 0;
}
