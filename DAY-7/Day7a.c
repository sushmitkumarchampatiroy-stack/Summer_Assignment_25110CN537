//Write a program to Recursive factorial.
#include <stdio.h>
 int fact(int n){   //function declaration
    if(n<=1){
        return 1;   //base case
    }
    else {
        return n*fact(n-1);  //recursive case
    }
}
int main(){
    int n,factorial;
    printf("ENTER THE NUMBER WHOSE FACTORIAL YOU WANT : ");
    scanf("%d",&n);
    factorial=fact(n);    //calling of function
    printf("The factorial of number : %d",factorial);
    return 0;
}
    

