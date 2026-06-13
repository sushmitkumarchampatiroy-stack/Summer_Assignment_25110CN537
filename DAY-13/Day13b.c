//Write a program to Find sum and average of array.
#include <stdio.h>
int main(){
    int n,i,a[50],sum=0,avg;
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");   //input the elements
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //to find the sum of elements
     for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    //to find average of elements
    avg=sum/n;

    printf(" SUM OF ELEMENTS OF ARRAY : %d \n",sum);  //to display the sum of elements
    printf(" AVERAGE OF ELEMENTS OF ARRAY : %d",avg); //to display the average of elements
    return 0;
}
