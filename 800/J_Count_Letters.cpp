#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int arr[26] = {0};
    int len = S.length();

    for (int i = 0; i < len; i++) {
        arr[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            cout << char('a' + i) << " : " << arr[i] << endl;
        }
    }

    return 0;
}
