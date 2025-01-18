#include<bits/stdc++.h>
using namespace std;

int odd(int n){
    if (n%2!=0)

void binarypalindrome(int n){
    string binary = "";
    while (n>0){
         binary += (n%2)+'0';
         n /=2;

    }
    string reversedBinary = binary;
    reverse(reversedBinary.begin(), reversedBinary.end());
}

int main ()
{
   int n ;
    cin >> n ;


 return 0;
}


