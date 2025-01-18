#include<stdio.h>
int main ()
{
    long long int a , b , c , d , a1,b1,c1,d1;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);


    a1= a%100;
    b1= b%100;
    c1= c%100;
    d1= d%100;
    int Multiplication = a1*b1*c1*d1;

    int lastTwoDigits = Multiplication % 100;

    if (lastTwoDigits == 0){
        printf("00");
    }
    else if (lastTwoDigits < 10){
            printf("0%d",lastTwoDigits);
    }
    else{
        printf ("%d",lastTwoDigits);
    }


    return 0;
}
