//Write a program to Multiply matrices
#include <stdio.h>
int main(){
    int R1,C1,R2,C2,a[50][50],b[50][50],c[50][50],i,j,k;
    //for taking inputs
    printf("ENTER THE NO. OF ROWS OF FIRST MATRIX : ");
    scanf("%d",&R1);
    printf("ENTER THE NO. OF COLUMNS OF FIRST MATRIX : ");
    scanf("%d",&C1);
    printf(" ENTER THE MATRIX :");
    for(i=0;i<R1;i++){
        for(j=0;j<C1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE NO. OF ROWS OF SECOND MATRIX : ");
    scanf("%d",&R2);
    printf("ENTER THE NO. OF COLUMNS OF SECOND MATRIX : ");
    scanf("%d",&C2);
    printf(" ENTER THE MATRIX :");
    for(i=0;i<R2;i++){
        for(j=0;j<C2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(C1 != R2){
        printf(" MULTIPLICATION NOT POSSIBLE");
        return 0;
    }
    //for multiplying matrix
    else {
        for(i=0;i<R1;i++){
            for(j=0;j<C2;j++){
                c[i][j]=0;
                for(k=0;k<R2;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

    }
    //printing of the result
     printf("MULTIPLICATION OF BOTH MATRIX : \n");
    for(i=0;i<R1;i++){
        for(j=0;j<C2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}