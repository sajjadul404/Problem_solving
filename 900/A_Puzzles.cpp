#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    
    for (int i = 0; i < m; ++i)
        cin >> f[i];

    sort(f.begin(), f.end());

    int min_diff = 1000000000;
    for (int i = 0; i + n - 1 < m; ++i) {
        int diff = f[i + n - 1] - f[i];
        if (diff < min_diff)
            min_diff = diff;
    }

    cout << min_diff << endl;
    return 0;
}
