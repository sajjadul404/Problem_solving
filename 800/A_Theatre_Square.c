#include <stdio.h>
#include <math.h>

int main() {
    long long n, m, a;

    scanf("%lld %lld %lld", &n, &m, &a);

    long long flagstones_length = (n + a - 1) / a;
    long long flagstones_width = (m + a - 1) / a;
    long long total_flagstones = flagstones_length * flagstones_width;

    printf("%lld", total_flagstones);

    return 0;
}
