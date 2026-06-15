//Write a program to Reverse array.
#include <stdio.h>
int main(){
    int n,i,a[50],r[50];
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //to reverse the given array

    for(i=0;i<n;i++){
        r[n-i-1]=a[i];
    }
    printf("\n");
    //to print reversed array
    printf("REVERSE ARRAY \n");
    for(i=0;i<n;i++){
        printf("%d ",r[i]);
    }
    return 0;
}