#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int R0, X, D, n;
        string s;
        cin >> R0 >> X >> D >> n >> s;

        int L = R0, R = R0;
        int ratedCount = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {

                ratedCount++;
                L = max(0, L - D);
                R = R + D;
            } else {
              
                if (R < X) {
                   
                    ratedCount++;
                    L = max(0, L - D);
                    R = R + D;
                } else if (L >= X) {

                } else {
                    ratedCount++;

                    R = X - 1;
                    L = max(0, L - D);
                }
            }
        }
        
        cout << ratedCount << endl;
    }
    
    return 0;
}