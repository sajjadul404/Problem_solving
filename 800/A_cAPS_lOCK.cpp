#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allUpper = true;
    bool allUpperExceptFirst = true;

    for (char c : s) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }

    for (int i = 1; i < s.size(); i++) {
        if (!isupper(s[i])) {
            allUpperExceptFirst = false;
            break;
        }
    }

    if (allUpper || allUpperExceptFirst) {
        for (int i = 0; i < s.size(); i++) {
            if (isupper(s[i])) 
                s[i] = tolower(s[i]);
            else 
                s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
