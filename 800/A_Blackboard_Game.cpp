#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}
