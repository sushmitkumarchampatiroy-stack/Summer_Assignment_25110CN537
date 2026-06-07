//Write a program to Write function for Fibonacci.
#include<stdio.h>
int fib(int a){
    int firstnum=0,secondnum=1,i,next;
    printf("THE FIBONACC SERIES \n");
   for(i=1;i<=a;i++){
    printf("%d ",firstnum);
    next=firstnum+secondnum;
    firstnum=secondnum;
    secondnum=next;
   }
return 0;
}
int main(){
    int n;
    printf("ENTER THE NUMBER OF TERMS OF FIBONACCI SERIES : ");
    scanf("%d",&n);
    fib(n);
    return 0;
}

