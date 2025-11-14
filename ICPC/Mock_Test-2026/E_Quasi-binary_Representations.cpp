#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    for (int i = 0; i < N; i++) {
        string input;
        getline(cin, input);
        
        vector<char> parsed;
        int len = input.length();
        
    
        for (int j = 0; j < len; j++) {
            if (input[j] == '\\' && j + 1 < len && input[j + 1] == '0') {
                parsed.push_back('\0');
                j++;
            } else {
                parsed.push_back(input[j]);
            }
        }
        
        int strlen_val = 0;
        for (char c : parsed) {
            if (c == '\0') break;
            strlen_val++;
        }
        
        int sizeof_val = parsed.size() + 1;
        
        cout << sizeof_val << " " << strlen_val << endl;
    }
    
    return 0;
}