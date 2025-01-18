#include<stdio.h>
int main()
{
    char arr[100000];
    //scanf("%s",arr);
    gets(arr);

    int len = strlen(arr);

    for(int i=0;i<len; i++){
        if (arr[i]==','){
            printf(" ");
        }
        else if(arr[i]>='A' && arr[i]<='Z'){
            printf("%c",(char)arr[i]+32);
        }
        else{
            printf("%c",(char)arr[i]-32);
        }

    }
    return 0;
}
