#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >>q;
    string s;
    string t;
    while(q--)
    {
        int n;
        cin>>n;
        cin>>s>>t;


        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t)
        {
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }

    }
        return 0;
}
