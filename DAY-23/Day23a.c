//Write a program to Find first non-repeating character.
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,j=0,count,flag=0;
    //for taking input
    char a[50],b[50];
    printf("ENTER THE TEXT : ");
    fgets(a, sizeof(a), stdin);
    n=strlen(a);
    //for counting no. of repetion
    for(i=0;i<n;i++){
        count=0;
        for (j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
            
        }
        if(count==1){
            flag++;
            printf("THE FIRST NON REPEATING CHARACTER IS ' %c '",a[i]);
            return 0;
        }
    }
    if(flag==0){
        printf("THERE ARE NO NON REPEATING CAHRACTER");
    }
    return 0;
}

