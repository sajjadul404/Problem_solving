#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hh = (s[0] - '0') * 10 + (s[1] - '0');
        string mm = s.substr(3, 2);

        string period;
        int hour12;

        if (hh == 0) {
            hour12 = 12;
            period = "AM";
        } else if (hh < 12) {
            hour12 = hh;
            period = "AM";
        } else if (hh == 12) {
            hour12 = 12;
            period = "PM";
        } else {
            hour12 = hh - 12;
            period = "PM";
        }

        if (hour12 < 10)
            cout << "0";
        cout << hour12 << ":" << mm << " " << period << "\n";
    }

    return 0;
}
