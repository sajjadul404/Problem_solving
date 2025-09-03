#include <bits/stdc++.h>
using namespace std;

int main(){
    const int  MAX = 100000;
    vector<bool> is_prime(MAX + 1, true);

    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i * i <= MAX; i++){
        if(is_prime[i]){
            for(int j = i * i; j <= MAX; j += i){
                is_prime[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    while (n--){
       long long int x;
        cin >> x;
        
        long long root = sqrtl(x);
        if(root * root == x && is_prime[root]){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}