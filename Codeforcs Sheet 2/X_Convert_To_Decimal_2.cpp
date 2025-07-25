#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int count = __builtin_popcount(N); 

        int result = (1 << count) - 1;

        cout << result << endl;
    }

    return 0;
}
