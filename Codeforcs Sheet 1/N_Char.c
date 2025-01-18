
#include <stdio.h>
 
int main() {
    char letter;
 
    //printf("Enter a letter: ");
    scanf("%c", &letter);
 
 
    if (letter >= 'a' && letter <= 'z') {
 
        letter = letter - 32;
    }
 
    else if (letter >= 'A' && letter <= 'Z') {
 
        letter = letter + 32;
    }
 
    printf("%c\n", letter);
 
    return 0;
}