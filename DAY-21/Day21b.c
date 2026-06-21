//Write a program to Reverse a string
#include <stdio.h>
#include <string.h>
int main(){
    int i, n;
    char a[50],r[50];
    //for input of string 
    printf("ENTER THE TEXT");
    scanf("%s", a);
    n=strlen(a);
    //for reversing the string
    for(i = 0; i<n; i++){
        r[i]=a[n-i-1];
    }
    r[n]='\0';
    //for printing the string
    printf("REVERSED STRING \n");
    for(i=0;i<n;i++){
        printf("%c",r[i]);
    }
    return 0;
}
