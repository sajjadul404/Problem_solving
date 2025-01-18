#include<stdio.h>
int main()
{
    long long l1, r1, l2, r2;
    scanf("%lld%lld%lld%lld",&l1,&r1,&l2,&r2);


    if(l2<=r1){
        printf("%lld %lld",l2,r1);
    }
//    else if(l1<=r2){
//        printf("%lld %lld",l1,r2);
//    }
    else{
        printf("-1");
    }
    return 0;
}
291882089(l1) 585325539(r1) 358502890(l2) 365329221(r2)

