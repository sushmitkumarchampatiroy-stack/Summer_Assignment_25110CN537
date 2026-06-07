//Write a program to Write function for palindrome.
#include<stdio.h>
int pal(int a){
    int original,r,reverse=0;
    original=a;
    while(a>0){
        r=a%10;
        reverse= reverse*10 + r;
        a=a/10;
    }
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
    pal(n);
    return 0;
}
