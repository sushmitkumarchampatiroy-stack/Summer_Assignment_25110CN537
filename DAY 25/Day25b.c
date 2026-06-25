//Write a program to Find common characters in strings
#include <stdio.h>
#include <string.h>
int main (){
    int n1,n2,n,i,j=0,k,c[26]={0},d[26]={0},e[26];
    char a[50],b[50],f[50];
    //for taking input
    printf("ENTER THE FIRST TEXT : ");
    fgets(a, sizeof(a), stdin);
    n1=strlen(a);
    printf("ENTER THE SECOND TEXT : ");
    fgets(b, sizeof(b), stdin);
    n2=strlen(b);
    for(i=0;i<n1;i++){
    if(a[i]>='a' && a[i]<='z')
        c[a[i]-'a']++;
    }


    for(i=0;i<n2;i++){
    if(b[i]>='a' && b[i]<='z')
        d[b[i]-'a']++;
    }
    for(i=0;i<26;i++){
        e[i] = (c[i] < d[i]) ? c[i] : d[i];;
    }
   for(i = 0; i < 26; i++){
    for(k = 0; k < e[i]; k++){
        f[j++] = i + 'a';
    }
}
f[j] = '\0';
printf("SAME CHARACTER IN BOTH STRINGS: %s\n", f);
    return 0;
}

