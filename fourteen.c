// Write a C program to find largest number among three numbers
#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a > b && a > c){
        printf("a = %d is largest number", a);
    }
    else if (b > c){
        printf("b = %d is largest number", b);
    }
    else{
        printf("c = %d is largest number", c);
    }
    return 0;
}
