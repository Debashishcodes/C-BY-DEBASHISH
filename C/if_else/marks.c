#include<stdio.h>
int main()
{
    int n ;
    printf("enter percentage : ");
    scanf("%d",n);
    //more than 80 -> a
    //more than 60 -> b
    //more than 40 -> c
    //less than 40 -> d
    
    if(n>80){
        printf("A grade");
    }
    else if (n>60){
        printf("B garde");    
    }
    else if(n>40){
        printf("C grade");
    }
    else{
        printf("D grade");
    }
    return 0;
    }