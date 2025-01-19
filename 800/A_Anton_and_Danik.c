#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char arr[1000000];
    scanf("%s", arr);

    int countA=0, countD =0;

    for (int i=0; i<n; i++){
       if (arr[i] == 'A'){
            countA++;
       }
       else if (arr[i] == 'D'){
            countD++;
       }
    }


    if (countA > countD){
        printf("Anton");
    }
    else if (countA < countD){
        printf("Danik");
    }
    else {
        printf ("Friendship");
    }


    return 0;
}
