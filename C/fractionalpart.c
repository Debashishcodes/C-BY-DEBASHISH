#include<stdio.h>
int main()
{
    float x;
    printf("enter decimal number : ");
    scanf("%f",&x);

    int y;
    y = x;
    printf("%d\n",y);
    float z = x - y ;
    printf("the fractional part of this number is %f",z);
    return 0;
}