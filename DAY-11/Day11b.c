//Write a program to Write function to find maximum.
#include<stdio.h>
int max(int a,int b){
    return ((a>b)?a:b);
}
int main(){
    int a,b;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER : ");
    scanf("%d",&b);
    printf("THE MAXIMUM OF TWO NUMBER : %d",max(a,b));
    return 0;
}

