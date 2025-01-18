#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

