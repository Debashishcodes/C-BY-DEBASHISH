#include <stdio.h>
int main ()
{
    int n ;
    printf("enter a number : ");
    scanf("%d",&n);

    if((n%5==0 || n%3==0) && n%15!=0){
        printf("The no is divisible by 5 or 3 but  not 15");
    }
    else{
        printf("The no is not matching the requiured condition");
    }
    return 0;
}