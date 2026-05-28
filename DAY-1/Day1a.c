#include <stdio.h>
int main(){
    int N,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
    
}