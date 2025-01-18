#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int num;
    for (int i=0; i<n; i++){
        scanf("%lld",&num);


         if (num == 0) {
            printf("0\n");
        } else {
            while (num > 0) {
                printf("%d", num % 10);
                num /= 10;
                if( num > 0){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
