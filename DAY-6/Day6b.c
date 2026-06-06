//Write a program to Convert binary to decimal
#include <stdio.h>
int main(){
    int n,r,decimal=0,b=1;
    printf("ENTER THE BINARY TO BE CONVERTED TO DECIMAL : ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        decimal=r*b+decimal;
        b=b*2;
        n=n/10;
    }
     printf("DECIMAL: %d",decimal);
    return 0;
}