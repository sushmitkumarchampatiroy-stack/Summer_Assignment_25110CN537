//Write a program to Move zeroes to end.
#include <stdio.h>
int main(){
    int n,i,a[50],b[50],j,swap;
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    j=0;
//to fill the starting elements of the array with non zero elements
for(i=0;i<n;i++){
    if(a[i]!=0){
        b[j]=a[i];
        j++;

    }
}
//to fill remaining elements with 0's
for(i=j;i<n;i++){
    b[j]=0;
}
//to print the new array
printf("NEW ARRAY : \n");
    for(i=0;i<n;i++){
        printf("%d,",b[i]);
    }
return 0;
}