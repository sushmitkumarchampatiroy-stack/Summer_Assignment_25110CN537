//Write a program to Create number guessing game.
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int choice,max,attempt,secret,i,end,guess,win;
    printf("YOU ARE PLAYING NUMBER GUESSING GAME \n");
    start:
    win=0;
    printf("CHOOSE FROM THE FOLLOWING OPTION : \n");
    printf("PRESS '1' FOR EASY MODE : NUMBERS FROM 1 TO 50 \n");
    printf("PRESS '2' FOR MEDIUM MODE : NUMBERS FROM 1 TO 100\n");
    printf("PRESS '3' FOR HARD MODE : NUMBERS FROM 1 TO 500\n");
    printf("PRESS '4' FOR EXITING THE GAME\n");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
        attempt=6,max=50,
        printf("YOU HAVE CHOSEN EASY MODE \n");
        printf("YOU HAVE GIVEN %d attempt \n",attempt);
        break;
        case 2 :
        attempt=5,max=100,
        printf("YOU HAVE CHOSEN MODERATE MODE \n ");
        printf("YOU HAVE GIVEN %d attempt \n",attempt);
        break;
        case 3 :
        attempt=3,max=500,
        printf("YOU HAVE CHOSEN HARD MODE \n");
        printf("YOU HAVE GIVEN %d attempt \n",attempt);
        break;
        case 4 :
        printf("YOU ARE EXITING THE GAME. \n");
        return 0;
        default :
        printf("YOU CHOSEN WRONG OPTION. PLEASE TRY AGAIN \n");
        goto start;

    }
    secret = rand() % max + 1;
        for(i=0;i<attempt;i++){
            printf("GUESS A NUMBER BETWEEN 1 AND %d \n",max);
            scanf("%d",&guess);
            if(secret==guess){
                win++;
                printf(" CONGRATULATIONS!! YOU HAVE GUESSED CORRECT NUMBER THAT IS '%d' \n",secret);
                break;
            }
            else if(guess>secret){
                printf("GUESSED NUMBER IS TOO HIGH \n");
            }
            else{
                printf("GUESSED NUMBER IS TOO LOW \n");
            }
            printf("THE NO. OF ATTEMPT LEFT IS %d \n",attempt-i-1);
        }
        if(win==0){
            printf("YOU WERE NOT ABLE TO GUESS THE NUMBER. THE NUMBER IS %d \n",secret);
        }
    printf("*********GAME ENDS********* \n");
    end:
    printf("CHOOSE FROM THE FOLLOWING OPTION :\n");
    printf("TO RESTART THE GAME PRESS '1' \n");
    printf("FOR EXITING THE GAME PRESS '2' \n ");
    scanf("%d",&end);
    switch (end)
    {
    case 1 :
        goto start;
        break;
    case 2 :
        printf("EXITING THE GAME.");
        return 0;
    default:
        printf("YOU HAVE CHOSEN WRONG OPTION \n ");
        goto end;
    }

}
