//Write a program to Frequency of an element.
#include <stdio.h>
int main(){
    int n,i,a[50],count,j,checked[50]={0};
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(checked[i]==0){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
                checked[j] = 1;
            }
        }
        printf("%d is present %d times in array \n",a[i],count);
    }
    }
    return 0;
}

