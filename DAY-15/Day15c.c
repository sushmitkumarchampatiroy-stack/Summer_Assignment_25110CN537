//Write a program to Rotate array right.
#include <stdio.h>
int main(){
    int n,i,a[50],flag,b[50];
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //to input the no .of position by which the array has to be rotated
    printf("ENTER THE NO. OF POSITION FOR WHICH IT NEED TO BE ROTATED : ");
    scanf("%d",&flag);
    //to rotate the array right
    for(i=0;i<n;i++){
        b[i] = a[((i - flag) % n + n) % n];
    }
    //to print the rotated array
    printf("NEW ARRAY : \n");
    for(i=0;i<n;i++){
        printf("%d,",b[i]);
    }
    return 0;
}