#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;


    int total_drink = k * l;
    int total_lime = c * d;


    int drink_toast = total_drink / nl;   
    int lime_toast = total_lime;          
    int salt_toast = p / np;     


    int total_toast = min({drink_toast, lime_toast, salt_toast});


    cout << total_toast / n << endl;

    return 0;
}
