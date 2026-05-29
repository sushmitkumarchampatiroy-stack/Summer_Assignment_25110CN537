#include <stdio.h>
int main(){
    int n,r,product=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        product=product*r;
        n=n/10;
    }
    printf("the product of digits  = %d",product);
    return 0;
    
}