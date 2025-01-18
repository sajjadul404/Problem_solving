#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    long long int a[n], max = 0;
    for(int i=0; i<n; i++){
        scanf("%lld",&a[i]);
        if (a[i] > max){
            max = a[i];
        }
    }
    printf ("%lld",max);
    return 0;
}
