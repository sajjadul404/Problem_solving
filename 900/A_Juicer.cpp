#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long b, d;
    cin >> n >> b >> d;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long waste = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] <= b) {         
            waste += a[i];
            if (waste > d) {    
                count++;
                waste = 0;       
            }
        }
    
    }

    cout << count << "\n";
    return 0;
}
