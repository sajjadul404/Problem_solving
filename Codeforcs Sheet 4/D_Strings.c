#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], sp[200];

    scanf("%s%s", a,b);



    int len1 = strlen(a);
    int len2 = strlen(b);
    printf("%d %d\n",len1,len2);


    strcpy(sp, a);
    strcat(sp, b);
    printf("%s\n", sp);


    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;


    printf("%s %s", a, b);

    return 0;
}
