//Write a program to Linear search
#include <stdio.h>
int main(){
    int n,i,a[50],flag,count=0,place=-1;
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENT TO BE SEARCHED : ");
    scanf("%d",&flag);
     for(i=0;i<n;i++){
        if(flag==a[i]){
            count++;
            place=i+1;
            printf("%d IS  PRESENT IN THE ARRAY AT %d \n ",flag,place);
        }
        
    }
    if(count=0){
        printf("%d IS NOT PRESENT IN THE ARRAY ",flag);
    }
    return 0;
}
