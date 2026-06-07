//Write a program to Recursive Fibonacci
#include <stdio.h>
int fib(int n){      //function declaration
if (n==1){
    return 0;        //base case
}
if(n==2){
    return 1;       //base case
}
else{
    return fib(n-1)+fib(n-2);   //recursive case
}
}
int main(){
    int n,fibonacci;
    printf("ENTER THE NO. OF TERM : ");
    scanf("%d",&n);
    printf("THE FIBONACCI SERIES \n");
    for(int i=1;i<=n;i++){
    printf("%d,",fib(i));        //calling of function
    }
    return 0;
}
    