#include<stdio.h>
int main()
{
int n;
printf("enter number of rows :");
scanf("%d",&n);

int m;
printf("enter number of columns :");
scanf("%d",&m);

    for(int i=1; i<=n; i++) // outer loop -> no of lines
    {
         for(int j=1; j<=m; j++){ // inner loop -> no of stars in each line  
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}