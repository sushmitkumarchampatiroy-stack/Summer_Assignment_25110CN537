#include<stdio.h>
int main(){
    printf("enter number of which the table is to be printed: ");
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;   
}