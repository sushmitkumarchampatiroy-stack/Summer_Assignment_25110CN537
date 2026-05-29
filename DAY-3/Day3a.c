#include <stdio.h>
int main(){
    int n,i,q,flag=0;
    printf("enter the no. to be checked ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        q=n%i;
        if(q==0){
            flag++;

        }

    }
    if (flag==2){
        printf("the number is prime");
    }
    else{
        printf("the no. is not prime");
    }
    return 0;

}