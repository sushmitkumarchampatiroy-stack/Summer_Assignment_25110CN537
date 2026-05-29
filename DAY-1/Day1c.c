#include <stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter the number of which you want to find factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the factorial of %d = %d",n,fact);



}