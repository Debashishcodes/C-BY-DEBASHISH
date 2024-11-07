#include <stdio.h>
int main (){
    int a,b;  // a > b
    printf("enter dividend : ");
    scanf("%d",&a);
    printf("enter diviosr : ");
    scanf("%d",&b); 
    int q = a/b ;
    int r = a-b*q;  //divisor*quotient+remaindeer= devidend
    printf("the remainder when %d is devided by %d is : %d",a,b,r );

    return 0;
} 