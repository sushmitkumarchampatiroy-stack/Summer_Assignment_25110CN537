//Write a program to Check anagram strings
#include <stdio.h>
#include <string.h>
int main (){
    int n1,n2,i,j=0,count=0;
    char a[50],b[50],temp;
    //for taking input of first word
    printf("ENTER THE FIRST WORD : ");
    fgets(a, sizeof(a), stdin);
    n1=strlen(a);
    //for sorting the string
     for (i = 0; i < n1 - 1-1; i++) {
        for (j = 0; j < n1 - i - 1-1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    a[n1-1]='\0';
    //for taking input of second word
    printf("ENTER THE SECOND WORD : ");
    fgets(b, sizeof(b), stdin);
    n2=strlen(b);
    //for sorting the string 
    for (i = 0; i < n2 - 1-1; i++) {
        for (j = 0; j < n2 - i - 1-1; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    b[n2-1]='\0';
    if (n1 != n2) {
    printf(" GIVEN STRINGS ARE NOT NOT ANAGRAMS.\n");
    return 0;
}
//for checking if anagram or not and displaying result
    for(i=0;i<n1;i++){
        if(a[i]==b[i]){
            count++;
        }
    } 
    if(count == n1){
        printf("THE GIVEN SRTINGS ARE ANAGRAMS.");
    }

    else{
        printf("THE GIVEN SRTINGS ARE NOT ANAGRAMS.");
    }
    return 0;

}