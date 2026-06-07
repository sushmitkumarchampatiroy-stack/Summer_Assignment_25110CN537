//Write a program to Print number triangle.
#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(k=1;k<=i;k++){
            printf("%d",k);
            }
        
        printf("\n");
    }
    
    return 0;
}

