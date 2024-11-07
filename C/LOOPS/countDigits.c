#include<stdio.h>
int main(){
    int n; // declare n as int
    printf("enter a number: ");
    scanf("%d", &n);
    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    printf("digits are %d", count);
    return 0;
}
