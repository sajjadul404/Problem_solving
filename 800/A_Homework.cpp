#include <bits/stdc++.h>
using namespace std;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


void solve()
{
    int n;
    cin>>n;

    string s1;
    cin>>s1;

    int m;
    cin>>m;

    string s2,c;
    cin>>s2>>c;

    string str1="";
    string str2="";
    for(int i=0;i<m;i++)
    {
        if(c[i]=='V')
        {
            str1+=s2[i];
        }
        else if(c[i]=='D')
        {
            str2+=s2[i];
        }
    }

    reverse(str1.begin(),str1.end());
    cout<<str1+s1+str2<<endl;

}

int main()
{
    fastio();


    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
