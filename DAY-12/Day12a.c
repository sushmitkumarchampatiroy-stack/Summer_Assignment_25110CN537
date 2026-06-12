//Write a program to Write function for palindrome.
#include<stdio.h>
int pal(int a){     //function declaration
    int original,r,reverse=0;
    original=a;
    while(a>0){
        r=a%10;   //to get the last digit
        reverse= reverse*10 + r;  //to get the reversed number
        a=a/10;   //to remove last digit
    }
    // to check for palindrome
    if(original == reverse){
        printf("THE NUMBER IS A PALINDROME");
    }
    else{
        printf("THE NUMBER IS NOT PALINDROME");
    }
    return 0;
}
int main(){
    int n;
    printf("ENTER THE NUMBER TO BE CHECKED FOR PALINDROME : ");
    scanf("%d",&n);
    pal(n);    //calling of function
    return 0;
}
