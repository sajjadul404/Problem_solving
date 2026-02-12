#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long a = 0, b = 1;

    if (N == 1) {
        cout << 0;
    }
    else if (N == 2) {
        cout << 1;
    }
    else {
        long long fib;
        for (int i = 3; i <= N; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << b;
    }

    return 0;
}
