//Write a program to Binary search.
#include <stdio.h>
int main(){
    int n,i,a[50],flag,count=0,beg,end,mid;
    //for taking array
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //for taking the item to be searched
    printf("ENTER THE ELEMENT TO BE SEARCHED : ");
    scanf("%d",&flag);
    beg=0;
    end=n-1;
    //for searching the element
    while(beg<end){
        mid=(beg+end)/2;

        if(a[mid] == flag){
            printf(" %d IS PRESENT IN THE ARRAY ",flag);
            count++;
            break;
        }
        else if(a[mid]>flag){
            end =mid-1;
        }
        else{
            beg=mid +1;
        }
    }
    if(count == 0){
        printf("THE NUMBER IS NOT PRESENT IN THE ARRAY");
    }
    return 0;
}
