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
    
        bool is_sorted = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i-1]) {
                is_sorted = false;
                break;
            }
        }
        
        if (is_sorted) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}