//Write a program to Check palindrome string. 
#include <stdio.h>
#include <string.h>
int main(){
    int i, n,count=0;
    char a[50],r[50];
    //for taking input
    printf("ENTER THE TEXT : ");
    scanf("%s", a);
    n=strlen(a);
    //for reversing the string
    for(i = 0; i<n; i++){
        r[i]=a[n-i-1];
    }
    r[n]='\0';
    //for comparing both string
    for(i=0;i<n;i++){
        if(r[i]==a[i]){
            count++;
        }
    }
    //for printing the result
    if(count == n){
        printf("THE STRING IS PALINDROME");
    }
    else{
        printf("THE STRING IS NOT PALINDROME");
    }
    return 0;
}
