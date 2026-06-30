//Write a program to Create menu-driven string operations system
#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

char a[MAX];

void add() {
    printf("==========================\n");
    printf("ENTER A STRING\n");
    printf("==========================\n");
    printf("ENTER THE STRING: ");
    scanf(" %[^\n]", a);
    printf("###STRING ENTERED SUCCESSFULLY###\n");
}

void display() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    printf("==========================\n");
    printf("THE STRING IS: %s\n", a);
    printf("==========================\n");
}

void Length() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    printf("LENGTH OF THE STRING IS: %lu\n", strlen(a));
}

void reverse() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    int len = strlen(a);
    for (int i = 0; i < len / 2; i++) {
        char temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
    printf("*****STRING REVERSED SUCCESSFULLY*****\n");
    displayString();
}

void Upper() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = toupper(a[i]);
    }
    printf("*****CONVERTED TO UPPERCASE*****\n");
    displayString();
}

void Lower() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = tolower(a[i]);
    }
    printf("*****CONVERTED TO LOWERCASE*****\n");
    displayString();
}

void Palindrome() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    int len = strlen(a);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (a[i] != a[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("'%s' IS A PALINDROME.\n", a);
    } else {
        printf("'%s' IS NOT A PALINDROME.\n", a);
    }
}

void countVowelsConsonants() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    int vowels = 0, consonants = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        char c = tolower(a[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }
    printf("VOWELS = %d, CONSONANTS = %d\n", vowels, consonants);
}

void Words() {
    if (strlen(a) == 0) {
        printf("STRING IS EMPTY! PLEASE ENTER A STRING FIRST.\n");
        return;
    }
    int wcount = 0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' ' && a[i+1]!=' '){
            wcount++;
        }
    }
    if(a[0]!=' '){
            wcount++;
        }
    printf("NUMBER OF WORDS = %d\n", wcount);
}

int main() {
    int choice;

    printf("==================================\n");
    printf(" MENU DRIVEN STRING OPERATIONS SYSTEM \n");
    printf("==================================\n");
    option:
        printf("\nCHOOSE FROM THE FOLLOWING OPTIONS:\n");
        printf("PRESS '1'  : INPUT STRING\n");
        printf("PRESS '2'  : DISPLAY STRING\n");
        printf("PRESS '3'  : FIND LENGTH\n");
        printf("PRESS '4'  : REVERSE STRING\n");
        printf("PRESS '5'  : CONVERT TO UPPERCASE\n");
        printf("PRESS '6'  : CONVERT TO LOWERCASE\n");
        printf("PRESS '7'  : CHECK PALINDROME\n");
        printf("PRESS '8'  : COUNT VOWELS AND CONSONANTS\n");
        printf("PRESS '9'  : COUNT WORDS\n");
        printf("PRESS '10' : EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add();
                goto option;
            case 2:
                display();
                goto option;
            case 3:
                Length();
                goto option;
            case 4:
                reverse();
                goto option;
            case 5:
                Upper();
                goto option;
            case 6:
                Lower();
                goto option;
            case 7:
                Palindrome();
                goto option;
            case 8:
                countVowelsConsonants();
                goto option;
            case 9:
                Words();
                goto option;
            case 10:
                printf("EXITING PROGRAM. GOODBYE!\n");
                return 0;
            default:
                printf("INVALID CHOICE! PLEASE TRY AGAIN.\n");
                goto option;
        }
}
