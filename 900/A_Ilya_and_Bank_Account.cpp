#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n >= 0) {
        cout << n;
    } else {
     
        long long remove_last = n / 10;
   
        long long remove_second_last = (n / 100) * 10 + (n % 10);
        cout << max(remove_last, remove_second_last);
    }
    return 0;
}
