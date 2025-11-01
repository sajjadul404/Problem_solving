#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b,c,d;
        cin>> a;
        cin>> b;
        cin>> c;
        cin>> d;

        if(a==b && b == c && c==d && d==a )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
