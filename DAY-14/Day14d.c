//Write a program to Find duplicates in array.
#include <stdio.h>
int main(){
    int n,i,a[50],count=0,j;
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("THE DUPLICATE ELEMENTS ARE");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count=1;
                printf("%d \n",i);
                break;
            }
        }
    }
    if(count == 0){
        printf("NO DUPLICATE ELEMENT FOUND");
    }
    return 0;
}


