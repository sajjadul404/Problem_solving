#include<stdio.h>
int main()
 
{
    long long  X,Y,sum,sub,multiply;
    scanf("%lld%lld",&X,&Y);
 
    sum = X + Y;
    multiply = X * Y;
    sub = X  - Y;
 
    printf("%lld + %lld = %lld\n",X, Y, sum);
    printf("%lld * %lld = %lld\n",X, Y, multiply);
    printf("%lld - %lld = %lld\n",X, Y, sub);
    
    return 0;
}