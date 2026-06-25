//Write a program to Merge two sorted arrays
#include <stdio.h>
int main(){
    int n1,n2,i,a[50],b[50],k=0,j,c[50];
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS OF FIRST ARRAY  : ");
    scanf("%d",&n1);
    printf("ENTER THE ELEMENTS OF FIRST ARRAY : \n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("ENTER THE NO. OF ELEMENTS OF SECOND ARRAY : ");
    scanf("%d",&n2);
    printf("ENTER THE ELEMENTS OF SECOND ARRAY : \n");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    i=0;j=0;k=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n1){
        c[k++]=a[i++];
    }
    while(j<n2){
        c[k++]=b[j++];
    }
    printf("NEW ARRAY \n");
    for(i=0;i<n1+n2;i++){
        printf("%d ",c[i]);
    }
    return 0; 
}