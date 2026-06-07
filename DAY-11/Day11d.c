//Write a program to Write function to find factorial.
#include<stdio.h>
int factorial(int a){
    int i,fact=1;
    for(i=1;i<=a;i++){
        fact*=i;
    }
    printf("THE FACTORIAL OF NUMBER : %d",fact);
    return 0;
}
int main(){
    int n;
    printf("ENTER THE NUMBER WHOSE FACTORIAL IS REQUIRED : ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}