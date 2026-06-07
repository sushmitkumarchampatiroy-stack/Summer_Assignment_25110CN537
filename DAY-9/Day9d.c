//Write a program to Print hollow square pattern.
#include <stdio.h>
int main(){
    int n,i;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1||i==n){
            printf("***** \n");
        }
        else{
            printf("*   * \n");
        }
       
    }
    return 0;
}
