#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
    }

    int start,end;
    for(start=0,end=n-1; start<end; start++,end--){

        if (arr[start] != arr[end])
        {
           printf("NO");
           return 0;
        }

    }
    printf("YES");

    return 0;
}

