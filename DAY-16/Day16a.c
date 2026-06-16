//Write a program to Find missing number in array
#include <stdio.h>
int main(){
    int n,i,a[50],sumarr=0,intsum=0,temp,j;
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sumarr=sumarr + a[i];
    }
    //for sirting the array
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //for finding sum of all integers in the range 
for(i=a[0];i<=a[n-1];i++){
    intsum+=i;
}
printf("THE MISSING ELEMENT : %d",intsum-sumarr);
}

