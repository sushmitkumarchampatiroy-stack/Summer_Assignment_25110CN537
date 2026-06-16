//Write a program to Find maximum frequency element.
#include <stdio.h>
int main(){
    int n,i,a[50],maxe=0,j,checked[50]= {0},count,frequency=0;
    //to input elements
    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //for checking frequency of each element
    for(i=0;i<n;i++){
        if(checked[i]==0){
        count=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){  //for removing duplicate elements
                count++;
                checked[j] = 1;
            }
            
        }
        if(frequency<count){
            frequency=count;
            maxe=a[i];

        }
        
    }
    }
    printf("THE MAXIMUM FREQUENCY ELEMENT : %d. \n IT APPEARS %d TIMES.",maxe,frequency);
    return 0; 
}
