#include<stdio.h>
int main()
{
    int i,j;
    for( int i=4;i>=1;i--){
        for( int j=i;j<=4;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}