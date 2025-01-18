#include <stdio.h>
 
int main() {
    int N;
    int years , months , days ;
    
    scanf("%d", &N);
 
    
    for (years = 0; N >= 365; years++) {
        N=N-365;
    }
 
    for (months = 0; N >= 30; months++) {
      N=N-30 ;
    }
 
    days = N;
 
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
 
    return 0;
}