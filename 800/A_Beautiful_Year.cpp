#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;

    while (true) {
        y++; 
        int temp = y;
        set<int> digits;
        bool isUnique = true;

  
        while (temp > 0) {
            int d = temp % 10;
            if (digits.count(d)) {
                isUnique = false;
                break;
            }
            digits.insert(d);
            temp /= 10;
        }

        if (isUnique) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
