#include<stdio.h>
#include<string.h>
int main ()
{
    char S[50],T[50];
    scanf("%s%s",S,T);

    int len1 = strlen(S);
    int len2 = strlen(T);


     printf("%d %d\n",len1,len2);
     printf("%s %s\n", S, T);

    return 0;
}



////////////C++//////////
//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//    string S, T;
//
//    cin >> S >> T;
//
//
//    cout << S.length() << " " << T.length() << endl;
//
//    cout << S << " " << T << endl;
//
//    return 0;
//}

