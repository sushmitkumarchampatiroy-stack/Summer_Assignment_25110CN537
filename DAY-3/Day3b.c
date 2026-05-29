#include <stdio.h>
int main(){
    int n,i,j,flag=0;
    printf("enter the no. till you want to check for prime number ");
    scanf("%d", &n);
    printf("the prime present in the range of 1 - %d \n",n);

    for(j=1;j<=n;j++){
        flag=0;
        for(i=1;i<=j;i++){
        if(j%i==0){
            flag++;
        }

        }
         if (flag==2){
        printf("%d ",j);
    }
 }
    
   
    return 0;

}