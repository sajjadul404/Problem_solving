#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,temp;

    cin >> A >> B;

    while (B != 0) {
        temp = B;
        B = A % B;
        A = temp;
    }
    cout << temp << endl;

    return 0;
}
