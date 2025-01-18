#include <stdio.h>

int main() {
    int n,t;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);

        long long int result = 1;
        for (int j = 1; j <= t; j++) {
            result *= j;
        }

        printf("%lld\n", result);
    }

    return 0;
}

