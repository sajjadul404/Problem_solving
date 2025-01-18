#include<bits/stdc++.h>
using namespace std;


int swapnum(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main ()
{
    int x,y;
    cin >> x >> y;

    swapnum(x,y);

    cout << x << " " << y << endl;

    return 0;

}
