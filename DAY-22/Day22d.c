//Write a program to Remove spaces from string.
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,j=0;
    char a[50],b[50];
    //for taking input
    printf("ENTER THE TEXT : ");
    fgets(a, sizeof(a), stdin);
    n=strlen(a);
    //for entering characters only in other string
    for(i=0;i<n;i++){
        if(a[i]!=' '){
            b[j]=a[i];
            j++;

        }
    }
    b[j]='\0';
    //printing new string

    printf("NEW STRING \n");
    for(i=0;i<n;i++){
        printf("%c",b[i]);
    }
    return 0;
}
