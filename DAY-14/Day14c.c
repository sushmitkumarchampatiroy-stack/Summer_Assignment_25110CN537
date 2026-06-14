//Write a program to Second largest element.
#include <stdio.h>
#include<limits.h>
int main(){
    int n,i,a[50],max=INT_MIN,max2=INT_MIN;
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(max2<a[i] && a[i] != max){
            max2=a[i];
        }
    }
    printf(" THE SECOND LARGEST ELEMENT : %d",max2);
    return 0;
}

