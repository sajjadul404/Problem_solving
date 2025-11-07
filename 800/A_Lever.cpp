#include <cstdio>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[15], b[15];
        for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
        for (int i = 0; i < n; ++i) scanf("%d", &b[i]);
        
        int dec = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) dec += (a[i] - b[i]);
        }
        
        printf("%d\n", dec + 1);
    }
    return 0;
}
