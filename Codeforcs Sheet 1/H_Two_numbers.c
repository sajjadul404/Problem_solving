#include<stdio.h>
int main()
{
    int A , B;
    scanf("%d%d",&A,&B);

    double C = (double) A/B;

    printf("floor %d / %d = %d\n", A,B,(int)floor (C));
    printf("ceil %d / %d = %d\n", A, B,(int)ceil (C));
    printf("round %d / %d = %d\n", A, B,(int)round (C));


    return 0;
}
