#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,n;
    cin >> x >> n;

    int sum = 0;
    int firstpwer = 1;

    for (int i=0; i<=n; i+=2){
        if (i == 0){
            sum += firstpwer -1;
        }
        else { 
            firstpwer *= x * x;
            sum += firstpwer;
        }

    }

    cout << sum  << endl;
    return 0;
}