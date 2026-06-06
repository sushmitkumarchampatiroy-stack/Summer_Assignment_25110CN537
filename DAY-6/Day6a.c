//Write a program to Convert decimal to binary. 
#include <stdio.h>
int main(){
    int n,r,binary=0,b=1;
    printf("ENTER THE NUMBER TO BE CONVERTED TO BINARY : ");
    scanf("%d",&n);
    while(n>0){
        r=n%2;
        binary=binary+r*b;
        b*=10;
        n=n/2;
    }
    printf("binary: %d",binary);
    return 0;
}