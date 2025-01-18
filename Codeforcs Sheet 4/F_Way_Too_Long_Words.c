#include <stdio.h>

int main() {
    int n;


    scanf("%d", &n);

      char str[100];
    for (int i = 0; i < n; i++) {


        scanf("%s", str);

        int len = strlen(str);

        if (len <= 10) {

            printf("%s\n", str);
        } else {

            printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
        }
    }

    return 0;
}
