//Write a program to Print factors of a number. 
#include <stdio.h>
int main(){
    int n,i;
    printf("ENTER THE NUMBER WHOSE FACTORS YOU WANT : ");
    scanf("%d",&n);
    printf("THE FACTORS OF THE NUMBER \n ");
    //For finding factor of number
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d,",i);  //For printing each factors
          }
        }
return 0;
 }