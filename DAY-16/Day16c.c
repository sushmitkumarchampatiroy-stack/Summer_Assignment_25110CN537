//Write a program to Find pair with given sum.
#include <stdio.h>
int main(){
int n,i,a[50],j,flag;
//to input elements
printf("ENTER THE NO. OF ELEMENTS : ");
scanf("%d",&n);
printf("ENTER THE ELEMENTS : \n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("ENTER THE SUM VALUE : "); //for taking sum value
scanf("%d",&flag);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]+a[j]==flag){   //for checking the condition for pair
            printf("THE PAIR OF ELEMENTS : (%d , %d) \n",a[i],a[j]);
        }
    }
}
return 0;
}