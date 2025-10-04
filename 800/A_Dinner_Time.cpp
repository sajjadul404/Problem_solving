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
            cout << "YES"<<endl;
        } else {
            int x = a / c;
            if (x * d == b) {
                cout << "YES"<<endl;
            } else {
                cout << "NO"<<endl;
            }
        }
    }

    return 0;
}
