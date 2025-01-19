#include <stdio.h>
int main() {
    int n, k;
    int scores[50];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int threshold_score = scores[k - 1];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold_score && scores[i] > 0) {
            count++;
        } else {
            break;
        }
    }
    printf("%d\n", count);

    return 0;
}
