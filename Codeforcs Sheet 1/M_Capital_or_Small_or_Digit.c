#include<stdio.h>
int main()
{
    char A;

    scanf("%c",&A);

    if (A>='0' && A <='9')
    {
        printf("IS DIGIT");
    }
    else if (A>='A' && A <='Z')
    {
        printf("ALPHA\n""IS CAPITAL");
    }
    else if (A>='a' && A <='z')
    {
        printf("ALPHA\n""IS SMALL");
    }



    return 0;
}

