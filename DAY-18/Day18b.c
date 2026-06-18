//Write a program to Selection sort.
#include <stdio.h>
int main(){
     int n,i,j,a[50],swap,minindex;
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
    for(i = 0; i < n - 1; i++){
        minindex = i;                        

        for(j = i + 1; j < n; j++){
            if(a[j] < a[minindex]){
                minindex = j;                
            }
        }

        if(minindex != i){                   
            swap = a[i];
            a[i] = a[minindex];
            a[minindex] = swap;
        }
    }
    // for printing sorted array
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}