//Write a program to Print repeated-number pattern
#include <stdio.h>
int main(){
    int n,i,j=1,k;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(k=1;k<=i;k++){
            printf("%d",j);
            }
        
        printf("\n");
        j++;
    }
    
    return 0;
}


