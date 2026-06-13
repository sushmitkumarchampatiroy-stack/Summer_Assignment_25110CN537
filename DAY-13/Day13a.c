//Write a program to Input and display array.
#include <stdio.h>
int main(){
    int n,i,a[50];
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");   //input the elements of array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("ELEMENTS OF ARRAY : \n");  //display the elements of array
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}