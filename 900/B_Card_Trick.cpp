#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    int t,n,m,tm,tp;

    cin>>t;

    while(t--)
    {
        tp=0;

        cin>>n;
        vector<int>v(n);

        for(int i=0;i<n;i++)cin>>v[i];

        cin>>m;
        for(int i=0;i<m;i++)
        {
           cin>>tm;
           for(int j=0;j<tm;j++)
           {
               v.push_back(v[tp]);
               tp++;
           }
        }
        cout<<v[tp]<<endl;
    }
    return 0;
}
