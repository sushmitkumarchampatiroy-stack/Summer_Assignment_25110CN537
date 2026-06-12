//Write a program to Write function for perfect number.
#include <stdio.h>
int perfect(int a){    //function declaration
      int i,p=0;
    for(i=1;i<a;i++){
        if(a%i==0){     //to find the factor
            p=p+i;      //to find sum of factor
        }
    }
    //to check for perfect number
    if(p == a){
        printf("The no. is perfect number");
    }
    else{
        printf("The no. is not perfect number");
    }
    return 0;
}
int main(){
    int n;
    printf("ENTER THE NUMBER TO BE CHECKED FOR PERFECT NUMBER : ");
    scanf("%d",&n);
    perfect(n);     //calling of function
    return 0;
}
