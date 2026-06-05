//Write a program to Check strong number.
#include <stdio.h>
int main(){
    int n,i,s=0,r,o;
    printf("ENTER THE NUMBER TO BE CHECKED : ");
    scanf("%d",&n);
    //real vaue of number gets deystroyed
    o=n;
    //For finding sum of factorial of each digits
    while(n>0){
       int fact=1;
        r=n%10;
        for(i=1;i<=r;i++){
            fact*=i;
        }
        s+=fact;
        n=n/10;

    }
    //For checking strong number
    if(s==o ){
        printf("the no. is stong number");
    }
    else{
        printf("the no. is not strong number");
    }
}