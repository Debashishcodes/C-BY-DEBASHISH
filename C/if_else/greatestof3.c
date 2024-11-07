#include<stdio.h>
int main()
{
    int a ;
    int b ;
    int c ;
    printf("enter 1st number : ");
    scanf("%d",&a);  
    printf("enter 2nd number : ");
    scanf("%d",&b);
    printf("enter 3rd number : ");
    scanf("%d",&c);

    if(a>b && a>c) {
        printf("a is greatest of all");
    }
    if(b>a && b>c){
        printf("b is greatest of all");
    }
    if(c>a && c>b){
        printf("c is greatest of all");
    }
    return 0;
}
