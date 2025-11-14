#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int N;
        cin >> N;
        
        vector<long long> heights(N);
        for (int i = 0; i < N; i++) {
            cin >> heights[i];
        }
   
        vector<long long> maxFromLeft(N), minFromRight(N);
     
        maxFromLeft[0] = -1;
        for (int i = 1; i < N; i++) {
            maxFromLeft[i] = max(maxFromLeft[i-1], heights[i-1]);
        }
        
        minFromRight[N-1] = LLONG_MAX;
        for (int i = N-2; i >= 0; i--) {
            minFromRight[i] = min(minFromRight[i+1], heights[i+1]);
        }
    
        int result = -1;
        for (int i = 0; i < N; i++) {
            bool valid = true;

            if (i > 0 && heights[i] <= maxFromLeft[i]) {
                valid = false;
            }
            if (i < N-1 && heights[i] >= minFromRight[i]) {
                valid = false;
            }
            
            if (valid) {
                result = i + 1;
                break;
            }
        }
        
        cout << "Case " << caseNum << ": ";
        if (result != -1) {
            cout << result << "\n";
        } else {
            cout << "Humanity is doomed!\n";
        }
    }
    
    return 0;
}