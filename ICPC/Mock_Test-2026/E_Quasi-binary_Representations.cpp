#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;
const int BITS = 61;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long n;
        int k;
        cin >> n >> k;

        vector<long long> dp(k + 1, 0);
        dp[0] = 1; 
        
        for (int pos = 0; pos < BITS; pos++) {
            int need = (n >> pos) & 1;

            vector<long long> prefix(k + 2, 0);
            for (int i = 0; i <= k; i++) {
                prefix[i + 1] = (prefix[i] + dp[i]) % MOD;
            }
            
            vector<long long> new_dp(k + 1, 0);
         
            for (int new_carry = 0; new_carry <= k; new_carry++) {

                int low = max(0, need + 2 * new_carry - k);
                int high = min(k, need + 2 * new_carry);
                
                if (low <= high) {
                    new_dp[new_carry] = (prefix[high + 1] - prefix[low] + MOD) % MOD;
                }
            }
            
            dp = new_dp;
        }
        
        cout << dp[0] << '\n';
    }
    
    return 0;
}