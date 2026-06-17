//Write a program to Union of arrays
#include <stdio.h>
int main(){
    int n1,l,n2,i,j,a[50],b[50],n[50],u[50],checked[50]={0};
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
        scanf("%d",&b[i]);
    }
    int k=0;
    for(i=0;i<n1;i++){
        n[k]=a[i];
        k++;
       
    }
    for(i=0;i<n2;i++){
        n[k]=b[i];
        k++;
       
    }
    l=0;
    for(i=0;i<n1+n2;i++){
        if(checked[i]==0){
            u[l]=n[i];   //for entering the elemnts once in a new array
             l++;
        for(j=0;j<n1+n2;j++){
            if (n[j] == n[i]) {  //for skipping the dupicate elements from the given array
                    checked[j] = 1;
                }
        }
    }
}

    printf("THE NEW ARRAY : \n");
    for(i=0;i<l;i++){
        printf("%d ",u[i]);
    }

        

return 0;
}