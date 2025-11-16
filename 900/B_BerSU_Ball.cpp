#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int m;
    cin >> m;
    vector<int> b(m);
    for (int &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, pairs = 0;

    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) {
            pairs++;
            i++;
            j++;
        } 
        else if (a[i] < b[j]) {
            i++;
        } 
        else {
            j++;
        }
    }

    cout << pairs;
    return 0;
}
