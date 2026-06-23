//Write a program to Find first repeating character
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,j=0,flag=0;
    char a[50];
    //for taking input
    printf("ENTER THE TEXT : ");
    fgets(a, sizeof(a), stdin);
    n=strlen(a);
    //for checking repetion of character
    for(i=0;i<n;i++){
        for (j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag++;

                printf("THE FIRST  REPEATING CHARACTER IS ' %c '",a[i]);
            return 0;
            }
            
        }
    }
    if(flag==0){
        printf("THERE ARE NO  REPEATING CAHRACTER");
    }
    return 0;
}




