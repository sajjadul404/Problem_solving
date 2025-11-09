#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        long long prev_time = 0;
        int prev_side = 0;
        long long score = 0;

        for (int i = 0; i < n; i++) {
            long long time;
            int side;
            cin >> time >> side;

            long long diff = time - prev_time;

            if ((diff % 2) == abs(prev_side - side))
                score += diff;
            else
                score += diff - 1;

            prev_time = time;
            prev_side = side;
        }

        score += m - prev_time;

        cout << score << "\n";
    }

    return 0;
}
