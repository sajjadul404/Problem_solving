#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    string S;
    cin >> S;
    
    if (S.length() != A + B + 1) {
        cout << "No";
        return 0;
    }
    
    if (S[A] != '-') {
        cout << "No";
        return 0;
    }
    
    for (int i = 0; i < S.length(); i++) {
        if (i == A) continue;
        
        if (S[i] < '0' || S[i] > '9') {
            cout << "No";
            return 0;
        }
    }
    
    cout << "Yes";
    
    return 0;
}
