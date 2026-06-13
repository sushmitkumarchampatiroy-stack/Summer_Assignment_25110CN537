//Write a program to Find largest and smallest element.
#include <stdio.h>
int main(){
    int n,i,a[50],max=-10000,min=10000;
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");  //input the elements of array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];   //to find the largest elements
        }
        if(min>a[i]){
            min=a[i];   //to find the smallest element
        }

    }

    printf(" MINIMUM VALUE OF ARRAY : %d \n",min);  //to display the smallest element
    printf(" MAXIMUM VALUE OF ARRAY : %d",max);     //to display largest element
    return 0;
}

