//Write a program to Merge arrays
#include <stdio.h>
int main(){
    int n1,n2,i,a[50],b[50],n[50];
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS OF 1ST ARRAY : ");
    scanf("%d",&n1);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("ENTER THE NO. OF ELEMENTS OF 2ND ARRAY : ");
    scanf("%d",&n2);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n2;i++){
        scanf("%d",&a[i]);
    }
    int k=0;
    for(i=0;i<n1;i++){
        n[k]=a[i];
        k++;
       
    }
    for(i=0;i<n2;i++){
        n[k]=a[i];
        k++;
       
    }
    printf("THE NEW ARRAY : \n");
    for(i=0;i<n2+n1;i++){
        printf("%d ",n[i]);
    }
        

return 0;
}