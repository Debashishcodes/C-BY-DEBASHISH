
#include<stdio.h>
int main ()
{
    int B ;
    printf("enter breadth : ");
    scanf("%d",&B);

    int L ;
    printf("enter length : ");
    scanf("%d",&L);

    int a = L * B ;
    int p = 2*(L+B);
    if(a>p){
    printf("The area of the rectangle is greater than its peerimeter ");
    }
    else{
        printf ("the area of the rectangle is  not greater than its peerimeter");
        }
        return 0;
}