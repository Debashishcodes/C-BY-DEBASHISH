#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of rows : ");
    scanf("%d",&n);
    
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j=j+2){
        printf("%d",a);
        a+3;
        }
        printf("\n");
        
    }
    return 0;
}