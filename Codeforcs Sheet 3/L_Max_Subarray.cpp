#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            int currentMax = A[i];
            for (int j = i; j < N; j++) {
                currentMax = max(currentMax, A[j]);
                cout << currentMax << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
