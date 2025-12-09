#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long x = 0;
        int i = 1;
        string winner = "";

        while(true){
            long long move = 2LL * i - 1;

            if(i % 2 == 1) x -= move, winner = "Sakurako";
            else x += move, winner = "Kosuke";

            if(abs(x) > n) break;

            i++;
        }

        cout << winner << "\n";
    }

    return 0;
}
