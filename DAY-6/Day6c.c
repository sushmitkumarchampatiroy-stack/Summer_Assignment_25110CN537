//Write a program to Count set bits in a number
#include <stdio.h>
int main(){
    int n,count=0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    while(n>0){
        if(n%2!=0){    //Checking if bit is 1 or 0
            count++;
        }
        n=n/2;
    }
    printf("bits count : %d",count);
return 0;
}
 