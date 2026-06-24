//Write a program to Compress a string
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,j=0,count=0,b[50]={0},k=0;
    char a[50],c[50];
    printf("ENTER THE FIRST WORD : ");
    fgets(a, sizeof(a), stdin);
    n=strlen(a);
    k=0;
    for(i=0;i<n-1;i++){
        count=1;
        if(b[i]==0){
            c[k]=a[i];
            k++;
            for(j=i+1;j<n-1;j++){
            if(a[i]==a[j]){
                count++;
                b[j]=1;
            }
        }
        if(count!=1){
                c[k]='0' + count;
                k++;
            }
        }

    }
    c[k]='\0';
    printf("THE COMPRESSED STRING IS : \n");
    for(i=0;i<k;i++){
        printf("%c",c[i]);
    }
    return 0;
}