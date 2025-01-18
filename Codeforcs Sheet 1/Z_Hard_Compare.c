#include<stdio.h>
int main()
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf",&a, &b, &c, &d);

    double lhs = b * log(a);
    double rhs = d * log(c);


    if (lhs > rhs){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
