#include<stdio.h>
int main (){
    int i = 2 , j = 3 , k , l ;
    float a , b ;
    k = i/j*j ; 
    l = j/i*i ; 
    a = i/j*i ; 
    b = j/i*i ; 
    printf (" The output will be :  %d %d %f %f " ,  k , l , a , b); 
    return 0;
}