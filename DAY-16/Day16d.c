//Write a program to Remove duplicates from array.
#include <stdio.h>
int main(){
    int n,i,a[50],checked[50]={0},j,b[50];
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=0;
    for(i=0;i<n;i++){
        if(checked[i]==0){
            b[k]=a[i];   //for entering the elemnts once in a new array
             k++;
        for(j=0;j<n;j++){
            if (a[j] == a[i]) {  //for skipping the dupicate elements from the given array
                    checked[j] = 1;
                }
        }
    }
}
printf("THE NEW ARRAY : \n");
for(i=0;i<k;i++){
    printf("%d ",b[i]);
}
return 0;
}

