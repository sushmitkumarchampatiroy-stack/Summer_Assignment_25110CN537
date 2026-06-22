//Write a program to Count words in a sentence.
#include <stdio.h>
#include <string.h>
int main (){
    int n,i,wcount=0;
    char a[50];
    //for taking input
    printf("ENTER THE TEXT : ");
    gets(a);
    n=strlen(a);
    //for counting the words
    for(i=0;i<n;i++){
        if(a[i]==' ' && a[i+1]!=' '){
            wcount++;
        }
    }
    if(a[0]!=' '){
            wcount++;
        }
    //for printing no. of words
    printf("THE NO. OF WORDS : %d \n",wcount);
    return 0;


}
