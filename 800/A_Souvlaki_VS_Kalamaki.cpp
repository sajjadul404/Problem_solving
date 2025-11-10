#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool hasDuplicate = false;
        vector<int> b = a;
        sort(b.begin(), b.end());
        
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i-1]) {
                hasDuplicate = true;
                break;
            }
        }
        
        if (hasDuplicate) {
            cout << "YES\n";
        } else {
            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (a[i] < a[i-1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}