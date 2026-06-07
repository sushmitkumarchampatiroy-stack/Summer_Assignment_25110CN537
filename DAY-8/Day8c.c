//Write a program to Print character triangle.
#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(k=65;k<=64+i;k++){
            printf("%c",k);
            }
        
        printf("\n");
    }
    
    return 0;
}