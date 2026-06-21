//Write a program to Count vowels and consonants.
#include <stdio.h>
#include <string.h>
int main(){
    int i, n,vowel=0,consonant=0;
    char a[50],r[50];
    //for entering the string
    printf("ENTER THE TEXT : ");
    scanf("%s", a);
    n=strlen(a);
    //for checking if vowels or consonants 
    for(i = 0; i<n; i++){
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' ||a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    //for printing of no. of vowel and consonants
    printf("NO. OF VOWEL : %d \n",vowel);
    printf("NO. OF CONSONANT : %d",consonant);
    return 0;
}

