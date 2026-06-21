//Write a program to Convert lowercase to uppercase.
#include <stdio.h>
#include <string.h>
int main(){
    int i, n,vowel=0,consonant=0;
    char a[50],r[50];
    //for entering the string
    printf("ENTER THE TEXT : ");
    scanf("%s", a);
    n=strlen(a);
    //for converting to uppercase
    for(i = 0; i<n; i++){
        if(a[i]=='A' || a[i]=='a'){
            a[i]='A';
        }
        else if(a[i]=='B' || a[i]=='b'){
            a[i]='B';
        }
        else if(a[i]=='C' || a[i]=='c'){
            a[i]='C';
        }
        else if(a[i]=='D' || a[i]=='d'){
            a[i]='D';
        }
        else if(a[i]=='E' || a[i]=='e'){
            a[i]='E';
        }
        else if(a[i]=='F' || a[i]=='f'){
            a[i]='F';
        }
        else if(a[i]=='G' || a[i]=='g'){
            a[i]='G';
        }
        else if(a[i]=='H' || a[i]=='h'){
            a[i]='H';
        }
        else if(a[i]=='I' || a[i]=='i'){
            a[i]='I';
        }
        else if(a[i]=='J' || a[i]=='j'){
            a[i]='J';
        }
        else if(a[i]=='K' || a[i]=='k'){
            a[i]='K';
        }
        else if(a[i]=='L' || a[i]=='l'){
            a[i]='L';
        }
        else if(a[i]=='M' || a[i]=='m'){
            a[i]='M';
        }
        else if(a[i]=='N' || a[i]=='n'){
            a[i]='N';
        }
        else if(a[i]=='O' || a[i]=='o'){
            a[i]='O';
        }
        else if(a[i]=='P' || a[i]=='p'){
            a[i]='P';
        }
        else if(a[i]=='Q' || a[i]=='q'){
            a[i]='Q';
        }
        else if(a[i]=='R' || a[i]=='r'){
            a[i]='R';
        }
        else if(a[i]=='S' || a[i]=='s'){
            a[i]='S';
        }
        else if(a[i]=='T' || a[i]=='t'){
            a[i]='T';
        }
        else if(a[i]=='U' || a[i]=='u'){
            a[i]='U';
        }
        else if(a[i]=='V' || a[i]=='v'){
            a[i]='V';
        }
        else if(a[i]=='W' || a[i]=='w'){
            a[i]='W';
        }
        else if(a[i]=='X' || a[i]=='x'){
            a[i]='X';
        }
        else if(a[i]=='Y' || a[i]=='y'){
            a[i]='Y';
        }
        else if(a[i]=='Z' || a[i]=='z'){
            a[i]='Z';
        }
    }
    //for printing the string
    printf("NEW STRING : \n");
    for(i=0;i<n;i++){
        printf("%c",a[i]);
    }
    return 0;
}



