#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int Arr[26] = {0};
        int balloons = 0;

        for (char c : s) {
            int idx = c - 'A';
            if (Arr[idx] == 0) {
                balloons += 2;
                Arr[idx] = 1;
            } else {
                balloons += 1;
            }
        }
        cout << balloons << "\n";
    }
    return 0;
}
