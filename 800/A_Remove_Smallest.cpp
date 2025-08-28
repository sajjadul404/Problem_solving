#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int mn = *min_element(arr, arr + n);
        int mx = *max_element(arr, arr + n);

        if (mx - mn > 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}
