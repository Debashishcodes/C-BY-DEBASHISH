#include<stdio.h>
int main (){
    float principal,rate,time,si;

    printf("enter principal : ");
    scanf("%f",&principal);

    printf("enter rate : " );
    scanf("%f",&rate);

    printf ("enter time : ");
    scanf("%f",&time);
    
    si = (principal*rate*time)/100;
    printf("your simple intrest is : %f",si);
    return 0;
}