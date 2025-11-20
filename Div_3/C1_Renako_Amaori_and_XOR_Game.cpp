#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        int diff = 0;
        for (int i = 0; i < n; i++) {
            diff += (a[i] ^ b[i]);
        }
        
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if ((i + 1) % 2 == 1) cnt1++;
                else cnt2++;
            }
        }

        
        int xorA = 0, xorB = 0;
        for (int i = 0; i < n; i++) {
            xorA ^= a[i];
            xorB ^= b[i];
        }

        if (xorA == xorB) {

            if (cnt1 == cnt2) {
                cout << "Tie\n";
            } else if (cnt1 > cnt2) {
                cout << "Ajisai\n";
            } else {
                cout << "Mai\n";
            }
        } else if (xorA > xorB) {

            if (cnt2 >= cnt1) {
                cout << "Mai\n";
            } else {
                cout << "Ajisai\n";
            }
        } else {

            if (cnt1 >= cnt2) {
                cout << "Ajisai\n";
            } else {
                cout << "Mai\n";
            }
        }
    }
    
    return 0;
}