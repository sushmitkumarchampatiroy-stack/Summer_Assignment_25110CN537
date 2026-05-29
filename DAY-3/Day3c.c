#include <stdio.h>
int main(){
    int a,b,i,GCD;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            GCD=i;
        }

    }
    printf("the GCD is : %d",GCD);
    return 0;
}