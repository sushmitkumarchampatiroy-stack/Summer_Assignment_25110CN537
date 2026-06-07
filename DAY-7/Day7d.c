//Write a program to Recursive reverse number. 
#include <stdio.h>
int reverse(int n , int rev){    //function declaration
    if(n==0){
        return rev;             //base case
    }
    else{
        return reverse(n/10, rev*10 + n%10);     //recursive case
    }
}
int main(){
    int n;
    printf("ENTER THE NUMBER WHOSE DIGIT'S SUM NEED TO FIND : ");
    scanf("%d",&n);
    printf("THE SUM OF DIGIT OF NUMBER : %d",reverse(n,0));       //calling of function
    return 0;
}