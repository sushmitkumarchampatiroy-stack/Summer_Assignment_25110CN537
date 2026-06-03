//Write a program to Find nth Fibonacci term.
#include <stdio.h>
int main(){
    int n,firstnum=0,secondnum=1,i,next;
    printf("enter the no. of terms of fibonacci series : ");
    scanf("%d",&n);
    printf("the fibonacci series \n");
   for(i=1;i<=n;i++){
    next=firstnum+secondnum;
    firstnum=secondnum;
    secondnum=next;
   }
   printf("%d ",next);    // For printing fibonacci series term one time

return 0;
}