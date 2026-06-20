//Write a program to Check symmetric matrix.
#include <stdio.h>
int main(){
    int m,n,a[50][50],b[50][50],i,j,count=0;
    //for taking input
    printf("ENTER THE NO. OF ROWS AND COLUMNS : ");
    scanf("%d",&n);
    printf(" ENTER THE MATRIX :");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //for checking of symmetry
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j] == a[i][j]){
                count++;
            }
        }
    }
    //for printing the result
    if(count == n*n){
        printf("THE MATRIX IS SYMMETRIC");
    }
    else{
        printf("THE MATRIX IS NOT SYMMETRIC");
    }
    return 0;
    
}