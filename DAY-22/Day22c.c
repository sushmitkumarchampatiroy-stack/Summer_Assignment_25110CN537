//Write a program to Character frequency.
#include <stdio.h>
#include <string.h>
int main(){
    int i,j,n,b[50]={0};
    char a[50];
    //for taking input
    printf("ENTER THE TEXT : ");
    scanf("%s", a);
    n=strlen(a);
    //for printing the result
    printf("FREQUENCIES OF CHARACTER IN TEXT : \n");
    for(i=0;i<n;i++){
       int count=0;
        if(b[i]==0){
            for(j=0;j<n;j++){
                if(a[i]==a[j]){
                    count++;
                    b[j]=1;

                }
            }
            printf(" %c appears %d times in the text \n",a[i],count);
        }
    }
    return 0;
}