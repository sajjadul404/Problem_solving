#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;


    int total_drink = k * l;
    int total_lime = c * d;


    int drink_toasts = total_drink / nl;   
    int lime_toasts = total_lime;          
    int salt_toasts = p / np;     


    int total_toasts = min({drink_toasts, lime_toasts, salt_toasts});


    cout << total_toasts / n << endl;

    return 0;
}
