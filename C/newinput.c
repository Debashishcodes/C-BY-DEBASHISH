#include<stdio.h>
int main (){
    int x ;
    printf("enter the first number : ");
    scanf("%d",&x);
    
    int y ;
    printf("enter the second number : ");
    scanf("%d",&y);
    
    int sum = x+y;
    printf("sum of the numbers that you gave is %d",sum);

    return 0;
}