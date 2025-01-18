#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
     int A, B, C;
    cin >> A >> B >> C;

     int numbers[3] = {A, B, C};
     sort(numbers, numbers + 3);

      for (int i = 0; i < 3; i++) {
        cout << numbers[i] << endl;
    }
    cout << endl;

    cout << A << endl << B << endl << C;



    return 0;
}
