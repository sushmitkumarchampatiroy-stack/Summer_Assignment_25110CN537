//Write a program to Bubble sort.
#include <stdio.h>
int main(){
     int n,i,j,a[50],swap;
     //for taking inputs.
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //for printing unsorted array
    printf(" THE UNSORTED ARRAY : \n ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf(" THE SORTED ARRAY : \n ");
    //for sorting array
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[i]<a[j]){
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;

            }
        }
    }
    // for printing sorted array
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}