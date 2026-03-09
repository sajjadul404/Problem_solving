#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int countAlmostPrime = 0;

    for (int i = 2; i <= n; i++) {
        int temp = i;
        int primeCount = 0;

        for (int j = 2; j * j <= temp; j++) {
            if (temp % j == 0) {
                primeCount++;

                while (temp % j == 0) {
                    temp /= j;
                }
            }
        }

        if (temp > 1) primeCount++;

        if (primeCount == 2)
            countAlmostPrime++;
    }

    cout << countAlmostPrime << endl;

    return 0;
}