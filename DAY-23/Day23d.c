//Write a program to Find maximum occurring character.
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,j=0,count=0,b[50]={0},f=0,pos=0;
    char a[50];
    //for taking input
    printf("ENTER THE WORD : ");
    fgets(a, sizeof(a), stdin);
    n=strlen(a);
    //for counting the no. of occurence
    for(i=0;i<n-1;i++){
        count=1;
        if(b[i]==0){
            for(j=i+1;j<n-1;j++){
            if(a[i]==a[j]){
                count++;
                b[j]=1;
            }
        }
    }
    if(f<count){
        f=count;
        pos=i;
    }

    }
    printf("THE MAXIMUM OCCURING CHARACTER IS %c . \n  IT APPEARS %d TIMES. ",a[pos],f);
    return 0;
}