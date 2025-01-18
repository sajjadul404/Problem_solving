#include<stdio.h>
int main()
{
    long long M,N,lastdigitN,lastdigitM,result;
    scanf("%lld%lld",&M,&N);
 
    lastdigitM= M % 10;
    lastdigitN= N % 10;
    result = lastdigitM + lastdigitN;
 
    printf("%lld\n",result);
    return 0;
}