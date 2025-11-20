#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int min_abs_sum;
    if (a[0] != -1 && a[n-1] != -1) {
        min_abs_sum = abs(a[n-1] - a[0]);
    } else {
        min_abs_sum = 0; 
    }
    
    cout << min_abs_sum << "\n";

    if (a[0] == -1 && a[n-1] == -1) {
        a[0] = 0;
        a[n-1] = 0;
    } else if (a[0] == -1) {
        a[0] = a[n-1];
    } else if (a[n-1] == -1) {
        a[n-1] = a[0];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) {
            a[i] = 0;
        }
    }
    
    int current_diff = a[n-1] - a[0];
    int target_diff = a[n-1] - a[0];  

    if (current_diff != target_diff) {

        a[n-1] = a[0] + target_diff;
        if (a[n-1] < 0) a[n-1] = 0;
    }
    
  
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}