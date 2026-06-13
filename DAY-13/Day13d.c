//Write a program to Count even and odd elements.
#include <stdio.h>
int main(){
    int n,i,a[50],ecount=0,ocount=0;
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");  ////input the elements of array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++){
        //to count even elements
        if(a[i]%2==0){
            ecount++;
        }
        // to count odd elements
        else{
            ocount++;
        }

    }

    printf(" EVEN ELEMENT COUNT OF ARRAY : %d \n",ecount);  //to display no. of even elements
    printf(" ODD ELEMENT COUNT OF ARRAY : %d",ocount);   //to display no. of odd elements
    return 0;
}
