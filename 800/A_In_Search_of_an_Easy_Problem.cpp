#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int opinion;
    bool hard = false;

    for (int i = 0; i < n; i++) {
        cin >> opinion;
        if (opinion == 1) {
            hard = true; 
        }
    }

    if (hard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
