#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (a[0] != -1 && a[n-1] != -1) {

        int sum = abs(a[n-1] - a[0]);
        cout << sum << "\n";
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) a[i] = 0;
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }

    if (a[0] == -1 && a[n-1] == -1) {
        cout << "0\n";
        for (int i = 0; i < n; i++) {
            cout << "0 ";
        }
        cout << "\n";
    }
    else if (a[0] == -1) {
        cout << "0\n";
        a[0] = a[n-1];
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) a[i] = 0;
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    else {
        cout << "0\n";
        a[n-1] = a[0];
        for (int i = 0; i < n; i++) {
            if (a[i] == -1) a[i] = 0;
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}