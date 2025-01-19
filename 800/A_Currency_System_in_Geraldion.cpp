#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 1) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << 1 << endl;
    return 0;
}