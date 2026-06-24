//Write a program to Find longest word. 
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,count=0;
    char a[50],b[50],c[50]="";
    //for taking input
    printf("ENTER THE TEXT : ");
    fgets(a, sizeof(a), stdin);
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]!=' ' && a[i]!='\n' ){
            b[count]=a[i];
            count++;
        }
        else{
            b[count]='\0';
            if(strlen(b)>strlen(c)){
                strcpy(c,b);
                count=0;

            }

        }
    }
    printf("THE LONGEST WORD IS '%s' ",c);
    return 0;
}

