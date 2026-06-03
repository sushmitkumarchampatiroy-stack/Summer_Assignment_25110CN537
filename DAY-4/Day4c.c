//Write a program to Check Armstrong number
#include <stdio.h>
#include <math.h>
int main(){
    int count=0,n,an=0,r,original;
    printf("enter the number to be checked");
    scanf("%d",&n);
     original = n;
    // for counting no. of digits
    while(n>0){
        n=n/10;
        count=count+1;
    }
    // the real value of n gets deystroyed
    n=original;
    //armstrong no. test
    while(n>0){
        r=n%10;
        an=an+ (int) pow(r, count);
        n=n/10;
    }
    
    if(original == an){
        printf("the no. is armstrong number.");
    }
    else{
        printf("the no. is not armstrong number.");
    }
        
    return 0;
}