//Write a program to Find string length without strlen().
#include <stdio.h>
int main(){
    int i=0, n;
    //input of string
    char a[50];
    printf("ENTER THE TEXT");
    scanf("%s", a);
    //for measuring length
    while( a[i] != '\0'){
        i++;
    }
    n = i;
    //for printing the length
    printf("Length = %d\n", n);
    return 0;
}
