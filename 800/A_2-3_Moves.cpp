#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n == 1)
            cout << 2 << endl;
        else
            cout << (n + 2) / 3 << endl; 
    }
    return 0;
}