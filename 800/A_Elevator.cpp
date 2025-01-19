#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string door;
    int rail;
    cin >> door >> rail;

    if ((door == "front" && rail == 1) || (door == "back" && rail == 2)) {
        cout << "L" << endl;
    } else {
        cout << "R" << endl;
    }

    return 0;
}

