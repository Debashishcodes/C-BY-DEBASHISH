#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("enter 1st number : ");
    scanf("%d",&a);  
    printf("enter 2nd number : ");
    scanf("%d",&b);
    printf("enter 3rd number : ");
    scanf("%d",&c);

    if (a>b){ // b is out of race
        if(a>c){
            printf("a is greatest");
        }
        else{
            printf("c is greatest"); // c>a
        }
    }

    if (b>a){// a is out of race 
        if(b>c){
             printf(" b is greatest");
        }
        else{
            printf("c is greatest"); // c>b
        }
       
    }  
}