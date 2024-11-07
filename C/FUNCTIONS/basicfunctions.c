#include<stdio.h>
int main(){
    void india();
    india();
    return 0;
}
void australlia(){
    void england ();
    printf("you are in australlia\n");
    england();
    return;
}
void india(){
    void australlia();
    printf("you are in india\n");
    australlia();
    return;
}
void england(){
    printf("you are in england\n");
    return;
}