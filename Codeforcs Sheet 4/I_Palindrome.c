#include<stdio.h>
int main()
{
    char arr[1000];

     gets(arr);
    int len= strlen(arr);

    for(int i=0;i<len/2;i++){
        if(arr[i]!= arr[len-i-1]){
            printf("NO");
            return 0;


    }
    }
    printf("YES");

    return 0;
}

