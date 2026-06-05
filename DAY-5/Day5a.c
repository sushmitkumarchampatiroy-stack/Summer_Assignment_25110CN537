//Write a program to Check perfect number
#include <stdio.h>
int main(){
    int n,i,p=0;
    printf("ENTER THE NUMBER TO BE CHECKED : ");
    scanf("%d",&n);
    // For checking perfect number
    for(i=1;i<n;i++){
        if(n%i==0){
            p=p+i;
        }
    }
    if(p == n){
        printf("the no. is perfect number");
    }
    else{
        printf("the no. is not perfect number");
    }
    return 0;
}