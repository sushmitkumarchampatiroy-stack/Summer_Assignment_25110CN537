//Write a program to Intersection of arrays
#include <stdio.h>
int main(){
    int n1,l,n2,i,j,a[50],b[50],n[50],checked[50]={0};
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
    l=0;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j] && checked[j]==0){
                n[l]=a[i];
                l++;
                checked[j]=1;
                break;

            }

        }
    }
printf("THE NEW ARRAY : \n");
    for(i=0;i<l;i++){
        printf("%d ",n[i]);
    }

        

return 0;
}