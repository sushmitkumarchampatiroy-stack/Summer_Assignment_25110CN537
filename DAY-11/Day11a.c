//Write a program to Write function to find sum of two numbers
#include<stdio.h>
int sum(int a , int b){
    return a+b;
}
int main(){
    int a,b;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER : ");
    scanf("%d",&b);
    printf("THE SUM OF TWO NUMBER : %d",sum(a,b));
    return 0;
}


