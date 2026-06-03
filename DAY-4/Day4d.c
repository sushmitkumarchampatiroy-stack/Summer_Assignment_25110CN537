//Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>
int main(){
    int count=0,n1,n2,i,an=0,r,original,n;
    printf("enter the range of number \n");
    printf("enter the lower limit of range : ");
    scanf("%d",&n1);
     printf("enter the upper limit of range : ");
    scanf("%d",&n2);
    // for counting digits in number repeated times 
    for(i=n1;i<=n2;i++){
        count=0;
        an=0;
     original = i;
     n=i;
    while(n>0){
        n=n/10;
        count=count+1;
    }
    // real value of n gets destroyed 
    n=original;
    //test  for armstrong number
    while(n>0){
        r=n%10;
        an=an+ (int) pow(r, count);
        n=n/10;
    }
    
    if(original == an){
        printf("%d,",original);
    }
    }  
    return 0;
}