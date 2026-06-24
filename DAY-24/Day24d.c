//Write a program to Remove duplicate characters
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,j,b[50]={0};
    char a[50],c[50];
    //for taking input
    printf("ENTER THE TEXT : ");
    fgets(a, sizeof(a), stdin);
    n=strlen(a);
    int k=0;

    for(i=0;i<n;i++){
        if(b[i]==0){
            c[k++]=a[i];
            for(j=0;j<n;j++){
                if(a[i]==a[j]){
                    b[j]=1;
                }
            }
        }
    }
    c[k]='\0';
    printf("THE NEW STRING IS %s",c);
    return 0;
}

