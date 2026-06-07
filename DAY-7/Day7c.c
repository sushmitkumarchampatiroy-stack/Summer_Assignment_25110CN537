//Write a program to Recursive sum of digits.
#include <stdio.h>
int sum(int n){            //function declaration
    if(n<=0){
        return 0;          //base case
    }
    else{
        return n%10 + sum((n/10));     //recursive case
    }
}
int main(){
    int n;
    printf("ENTER THE NUMBER WHOSE DIGIT'S SUM NEED TO FIND : ");
    scanf("%d",&n);
    printf("THE SUM OF DIGIT OF NUMBER : %d",sum(n));      //calling of function
    return 0;
}