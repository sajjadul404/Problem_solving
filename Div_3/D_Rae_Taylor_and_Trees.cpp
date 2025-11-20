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
        vector<int> p(n);
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) {
            pos[p[i]] = i;
        }
        
        int l = pos[1], r = pos[1];
        bool valid = true;
        
        for (int i = 2; i <= n; i++) {
            if (pos[i] == l - 1) {
                l--;
            } else if (pos[i] == r + 1) {
                r++;
            } else {
                valid = false;
                break;
            }
        }
        
        cout << (valid ? "Yes" : "No") << endl;
    }
    
    return 0;
}