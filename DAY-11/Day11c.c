//Write a program to Write function to check prime.
#include <stdio.h>
int prime(int a){
    int i,count=0;
    for(i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==2){
        printf("THE NUMBER IS PRIME NUMBER.");
    }
    else{
        printf("THE NUMBER IS NOT PRIME NUMBER");
    }
    return 0;
}
int main(){
    int n;
    printf("ENTER THE NUMBER TO BE CHECKED : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}