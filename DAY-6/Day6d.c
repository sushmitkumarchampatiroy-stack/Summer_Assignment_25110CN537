//Write a program to Find x^n without pow().
#include <stdio.h>
int main(){
    int n,x,i,solution=1;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&x);
    printf("ENTER THE EXPONENT : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        solution=solution*x;
     }
    printf("THE SOLUTION : %d",solution);
return 0 ;
    
}