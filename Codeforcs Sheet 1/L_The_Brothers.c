#include<stdio.h>
int main()
{
    char F1[100],S1[100],F2[100],S2[100];

    scanf("%s%s",F1,S1);
    scanf("%s%s",F2,S2);

    if (strcmp(S1,S2)==0){
        printf("ARE Brothers");
    }

    else {
        printf("NOT");
    }

    return 0;
}

