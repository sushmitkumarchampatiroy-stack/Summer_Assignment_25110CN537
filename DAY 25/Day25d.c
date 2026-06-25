//Write a program to Sort words by length.
#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,temp;
    char a[10][50],b[50];
    printf("ENTER THE NO. OF WORDS : \n");
    scanf("%d",&n);
    getchar();
    printf("ENTER THE WORDS \n");
    for (i = 0; i < n; i++) {
        printf("word %d: ", i + 1);
        fgets(a[i], sizeof(a[i]), stdin);
        int len = strlen(a[i]);
        if (a[i][len-1] == '\n'){
            a[i][len-1] = '\0';
        }
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if(strlen(a[j])>strlen(a[j+1])){
                strcpy(b,a[j]);
                strcpy(a[j],a[1+j]);
                strcpy(a[j+1],b);
            }
        }
    }
    printf("THE SORTED LIST \n");
    for(i=0;i<n;i++){
        printf("%s \n",a[i]);
    }
    return 0;

}