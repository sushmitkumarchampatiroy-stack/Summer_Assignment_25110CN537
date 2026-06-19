//Write a program to Find column-wise sum
#include <stdio.h>
int main(){
    int m,n,a[50][50],b[50][50],i,j,flag,sum=0;
    printf("ENTER THE NO. OF ROWS : ");
    scanf("%d",&n);
    printf("ENTER THE NO. OF COLUMNS : ");
    scanf("%d",&m);
    printf(" ENTER THE MATRIX :");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER COLUMN NUMBER OF WHICH YOU WANT THE SUM OF : ");
    scanf("%d",&flag);
        for(i=0;i<n;i++){
            sum+=a[i][flag-1];
            
        }
    printf("SUM OF ELEMENTS OF COLUMN NUMBER %d : %d ",flag,sum);
    return 0;
}

