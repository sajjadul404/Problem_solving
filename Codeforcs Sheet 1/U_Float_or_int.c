#include<stdio.h>
int main()
{
   double n,fractional;
    scanf("%lf",&n);

    int integer = (int)n;
    fractional = n - integer;

    if (fractional == 0) {
        printf("int %d",integer);
    } else {
        printf("float %d %.3f", integer, fractional);
    }

    return 0;
}
