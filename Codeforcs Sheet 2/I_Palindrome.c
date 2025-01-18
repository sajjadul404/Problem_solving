#include<stdio.h>
int main ()
{
    int n,rev=0,dig,org;
    scanf("%d",&n);
    org=n;

     while (n != 0) {
        dig = n % 10;
        rev = rev * 10 + dig;
        n /= 10;
     }
    printf("%d\n",rev);

    if (org == rev) {
        printf("YES");
    } else {
        printf("NO");
    }

    return  0;
}
