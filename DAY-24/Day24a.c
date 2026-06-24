//Write a program to Check string rotation.
#include <stdio.h>
#include <string.h>
int main (){
    int n1,n2,i,j=0,count=0;
    char a[50],b[50],temp;
    printf("ENTER THE WORD : ");
    fgets(a, sizeof(a), stdin);
    n1=strlen(a);
    printf("ENTER THE ROTATED STRING : ");
    fgets(b, sizeof(b), stdin);
    n2=strlen(b);
    if (n1 != n2) {
    printf(" GIVEN STRINGS ARE NOT ROATATION.\n");
    return 0;
}
    strcpy(temp,a);
    strcat(temp,a);
    if(strstr(temp,b)!= NULL){
        printf(" GIVEN STRINGS ARE ROATATION.\n");
        
    }
    else{
        printf(" GIVEN STRINGS ARE NOT ROATATION.\n");

    }
    return 0; 
}

