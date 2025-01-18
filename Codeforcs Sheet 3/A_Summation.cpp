#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << abs(sum) << endl;
}
