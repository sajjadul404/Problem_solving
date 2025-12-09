#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin >> test;

    while (test--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a % c) {
            cout << "YES\n";
        } 
        else {
            int x = a / c;
            if (x * d == b) {
                cout << "YES\n";
            } 
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
