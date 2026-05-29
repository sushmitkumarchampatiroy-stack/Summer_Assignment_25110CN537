#include <stdio.h>
int main(){
    int original,n,r,reverse=0;
    printf("enter the number");
    scanf("%d",&n);
    original=n;
    while(n>0){
        r=n%10;
        reverse= reverse*10 + r;
        n=n/10;
    }
    if(original == reverse){
        printf("the no. is a pallindrome");
    }
    else{
        printf("the no. is not pallindrome");
    }
    return 0;
    
}