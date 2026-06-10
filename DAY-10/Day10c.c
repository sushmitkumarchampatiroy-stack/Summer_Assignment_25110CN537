//Write a program to Print number pyramid
#include <stdio.h>
int main(){
    int n,i,j;
    printf("ENTER THE NUMBER OF ROWS : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            printf(" ");
            
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}