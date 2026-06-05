//Write a program to Find largest prime factor.
#include <stdio.h>
int main(){
    int n,i,j;
    printf("ENTER THE NUMBER WHOSE PRIME FACTORS YOU WANT : ");
    scanf("%d",&n);
    printf("THE PRIME FACTORS OF THE NUMBER \n ");
    for(i=1;i<=n;i++){
        if(n%i==0){    //For finding factor
           int count=0;
            for(j=1;j<=i;j++){   // For finding no. of factors

                if(i%j==0){
                    count++;
                   

                }
            }
            if(count==2){       // Checking for prime number
               printf("%d,",i);
             }
            
          }
        }
return 0;
 }