#include<stdio.h>
int main()
{
    int a , b ;
    char s;
    scanf("%d %c %d", &a, &s, &b );

    if ((s=='<' && a<b)||(s=='>' && a>b)|| (s=='='&& a==b)){
        printf("Right");
    }
    else{
        printf("Wrong");
    }

    return 0;
}
