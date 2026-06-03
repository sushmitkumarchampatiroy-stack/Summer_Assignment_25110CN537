//Write a program to Generate Fibonacci series.
#include <stdio.h>
int main(){
    int n,firstnum=0,secondnum=1,i,next;
    printf("enter the no. of terms of fibonacci series : ");
    scanf("%d",&n);
    printf("the fibonacci series \n");
   for(i=1;i<=n;i++){
    printf("%d ",firstnum);     //For printing fibonacci term repaeted times
    //For generating fibonacci term   
    next=firstnum+secondnum;
    firstnum=secondnum;
    secondnum=next;


   }

return 0;
}