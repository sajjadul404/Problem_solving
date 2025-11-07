#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[15], b[15];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        for (int i = 0; i < n; i++) scanf("%d", &b[i]);
        
        int dec = 0, inc = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) dec += (a[i] - b[i]);
            else inc += (b[i] - a[i]);
        }
        
        int result = std::max(dec, inc) + 1;
        cout << result << "\n";
    }
    return 0;
}
