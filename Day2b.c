#include <stdio.h>
int main(){
    int n,r,reverse=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        reverse= reverse*10 + r;
        n=n/10;
    }
    printf("the reverse  of number  = %d",reverse);
    return 0;
    
}