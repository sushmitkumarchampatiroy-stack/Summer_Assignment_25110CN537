//Write a program to Create quiz application
#include <stdio.h>
int main(){
    int difficulty,score,answer,choice1;
    char a[50];
    printf("********************************\n");
    printf("     WELCOME TO GENERAL QUIZ    \n");
    printf("********************************\n");
    printf("ENTER YOUR NAME: \n");
    fgets(a, sizeof(a), stdin);
    printf("================================\n");
    printf("HELLO %s \n",a);
    printf("================================\n");
    start:
    printf("********************************\n");
    printf("CHOOSE DIFFICULTY OPTION : \n");
    printf("PRESS '1' | EASY\n");
    printf("PRESS '2' | MEDIUM \n");
    printf("PRESS '3' | HARD\n");
    printf("PRESS '4' | QUIT\n");
    printf("********************************\n");

    scanf("%d",&difficulty);
    switch (difficulty)
    {
    case 1:
        printf("================================\n");
        printf("  YOU HAVE CHOSEN EASY QUIZ.\n ");
        printf("================================\n");
        goto easy;
    case 2:
        printf("================================\n");
        printf("  YOU HAVE CHOSEN MEDIUM QUIZ.\n ");
        printf("================================\n");
        goto medium;
     case 3:
        printf("================================\n");
        printf("  YOU HAVE CHOSEN HARD QUIZ.\n ");
        printf("================================\n");
        goto hard;
     case 4:
        printf("================================\n");
        printf("  YOU ARE EXITING THE QUIZ.\n ");
        printf("================================\n");
        return 0;
    
     
    default:
       printf("INVALID INPUT ! RENTER VALID INPUT\n. ");
       goto start;
    }
    printf("******************************************************\n");
    printf("                 ###INSTRUCTIONS###\n");
    printf("-THE QUIZ CONSISTS OF 15 QUESTIONS.\n");
    printf("-EVERY QUESTION HOLDS A SCORE OF 4 POINTS.\n");
    printf("-EVERY QUESTION ATTEMPTED CORRECTLY GIVES 4 POINTS.\n");
    printf("-EVERY QUESTION ATTEMPTED INCORRECT GIVES 0 POINTS.\n");
    printf("******************************************************\n");
    easy:
    score=0;
    //QUESTION : 1
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 1 : \n");
    printf(" WHAT IS THE CAPITAL OF FRANCE? ?\n");
    printf("------------------------------------------------\n");
    printf("1. Berlin\n");
    printf("2. Madrid\n");
    printf("3. Paris\n");
    printf("4. Rome\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");

    }
    //QUESTION : 2
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 2 : \n");
    printf(" HOW MANY DAYS ARE IN A WEEK ?\n");
    printf("------------------------------------------------\n");
    printf("1. 5\n");
    printf("2. 6\n");
    printf("3. 8\n");
    printf("4. 7\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");

    }
    //QUESTION : 3
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 3 : \n");
    printf(" WHAT COLOR DO YOU GET MIXING RED AND WHITE ?\n");
    printf("------------------------------------------------\n");
    printf("1. ORANGE\n");
    printf("2. PINK\n");
    printf("3. PURPLE\n");
    printf("4. BROWN\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");

    }
    //QUESTION : 4
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 4 : \n");
    printf(" HOW MANY SIDES DOES A TRIANGLE HAVE ?\n");
    printf("------------------------------------------------\n");
    printf("1. 2\n");
    printf("2. 4\n");
    printf("3. 3\n");
    printf("4. 5\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");

    }
    //QUESTION : 5
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 5 : \n");
    printf(" WHICH PLANET IS CLOSEST TO THE SUN ?\n");
    printf("------------------------------------------------\n");
    printf("1. EARTH\n");
    printf("2. VENUS\n");
    printf("3. MARS\n");
    printf("4. MERCURY\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");

    }
    //QUESTION : 6
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 6 : \n");
    printf(" WHAT IS 10 + 15 ?\n");
    printf("------------------------------------------------\n");
    printf("1. 20\n");
    printf("2. 25\n");
    printf("3. 30\n");
    printf("4. 35\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");

    }
    //QUESTION : 7
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 7 : \n");
    printf(" HOW MANY MONTHS ARE IN A YEAR ?\n");
    printf("------------------------------------------------\n");
    printf("1. 10\n");
    printf("2. 11\n");
    printf("3. 13\n");
    printf("4. 12\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");

    }
    //QUESTION : 8
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 8 : \n");
    printf(" WHAT ANIMAL IS KNOWN AS THE KING OF THE JUNGLE?\n");
    printf("------------------------------------------------\n");
    printf("1. TIGER \n");
    printf("2. LION\n");
    printf("3. ELEPHANT\n");
    printf("4. CHEETAH\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");

    }
    //QUESTION : 9
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 9 : \n");
    printf(" WHICH OCEAN IS THE LARGEST?\n");
    printf("------------------------------------------------\n");
    printf("1. ATLANTIC\n");
    printf("2. INDIAN\n");
    printf("3. ARCTIC\n");
    printf("4. PACIFIC\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");

    }
    //QUESTION : 10
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 10 : \n");
    printf(" HOW MANY HOURS ARE IN A DAY?\n");
    printf("------------------------------------------------\n");
    printf("1. 12\n");
    printf("2. 20\n");
    printf("3. 24\n");
    printf("4. 48\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");

    }
    //QUESTION : 11
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 11 : \n");
    printf(" WHAT IS THE COLOR OF THE SKY ON A CLEAR DAY?\n");
    printf("------------------------------------------------\n");
    printf("1. GREEN\n");
    printf("2. BLUE\n");
    printf("3. GREY\n");
    printf("4. WHITE\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");

    }
    //QUESTION : 12
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 12 : \n");
    printf(" HOW MANY LEGS DOES A SPIDER HAVE?\n");
    printf("------------------------------------------------\n");
    printf("1. 4\n");
    printf("2. 6\n");
    printf("3. 10\n");
    printf("4. 8\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");

    }
    //QUESTION : 13
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 13 : \n");
    printf(" WHAT IS THE BOILING POINT OF WATER (°C)?\n");
    printf("------------------------------------------------\n");
    printf("1. 90\n");
    printf("2. 110\n");
    printf("3. 80\n");
    printf("4. 100\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");

    }
    //QUESTION : 14
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 14 : \n");
    printf(" WHICH IS THE SMALLEST CONTINENT?\n");
    printf("------------------------------------------------\n");
    printf("1. AFRICA\n");
    printf("2. EUROPE\n");
    printf("3. AUSTRALIA\n");
    printf("4. ANTARTICA\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");

    }
    //QUESTION : 15
    printf("================================================\n");
    printf("  DIFFICULTY : EASY     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 15 : \n");
    printf("WHAT IS 5 * 5? \n");
    printf("------------------------------------------------\n");
    printf("1. 20\n");
    printf("2. 30\n");
    printf("3. 25\n");
    printf("4. 35\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");

    }
    printf("================================================\n");
    printf("               QUIZ ENDS HERE \n");
    printf("================================================\n");
    printf("        NAME : %s      SCORE : %d \n",a,score);
    printf("************************************************\n");
    c1:
    printf("================================================\n");
    printf("CHOOSE FROM BELOW OPTION : \n");
    printf("PRESS '1' | RESTART THE QUIZ\n");
    printf("PRESS '2' | TO QUIT\n");
     printf("================================================\n");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1:
        goto start;
    case 2:
        printf("YOU ARE QUITING THE QUIZ.");
        return 0;

    default:
        printf("INVALID INPUT! RENTER THE OPTION\n");
        goto c1;
    }
//medium
medium:
score=0;
//QUESTION : 1
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 1 : \n");
    printf(" WHAT GAS DO PLANTS ABSORB FROM THE AIR?\n");
    printf("------------------------------------------------\n");
    printf("1. Oxygen\n");
    printf("2. Nitrogen\n");
    printf("3. Carbon Dioxide\n");
    printf("4. Hydrogen\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");
    }

//QUESTION : 2
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 2 : \n");
    printf(" WHO INVENTED THE TELEPHONE?\n");
    printf("------------------------------------------------\n");
    printf("1. Edison\n");
    printf("2. Tesla\n");
    printf("3. Graham Bell\n");
    printf("4. Marconi\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");
    }

//QUESTION : 3
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 3 : \n");
    printf(" WHAT IS THE CHEMICAL SYMBOL FOR GOLD?\n");
    printf("------------------------------------------------\n");
    printf("1. Go\n");
    printf("2. Gd\n");
    printf("3. Gl\n");
    printf("4. Au\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 4
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 4 : \n");
    printf(" HOW MANY BONES ARE IN THE ADULT HUMAN BODY?\n");
    printf("------------------------------------------------\n");
    printf("1. 206\n");
    printf("2. 212\n");
    printf("3. 198\n");
    printf("4. 220\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==1){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 1\n");
    }

//QUESTION : 5
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 5 : \n");
    printf(" WHICH COUNTRY FIRST LANDED ON THE MOON?\n");
    printf("------------------------------------------------\n");
    printf("1. Russia\n");
    printf("2. China\n");
    printf("3. UK\n");
    printf("4. USA\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 6
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 6 : \n");
    printf(" WHAT IS THE SPEED OF LIGHT (KM/S)?\n");
    printf("------------------------------------------------\n");
    printf("1. 200,000\n");
    printf("2. 400,000\n");
    printf("3. 100,000\n");
    printf("4. 300,000\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 7
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 7 : \n");
    printf(" WHICH ORGAN PUMPS BLOOD IN THE BODY?\n");
    printf("------------------------------------------------\n");
    printf("1. Lungs\n");
    printf("2. Liver\n");
    printf("3. Kidney\n");
    printf("4. Heart\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 8
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 8 : \n");
    printf(" WHAT YEAR DID WORLD WAR II END?\n");
    printf("------------------------------------------------\n");
    printf("1. 1943\n");
    printf("2. 1944\n");
    printf("3. 1946\n");
    printf("4. 1945\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 9
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 9 : \n");
    printf(" WHAT IS THE POWERHOUSE OF THE CELL?\n");
    printf("------------------------------------------------\n");
    printf("1. Nucleus\n");
    printf("2. Ribosome\n");
    printf("3. Vacuole\n");
    printf("4. Mitochondria\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 10
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 10 : \n");
    printf(" WHO WROTE ROMEO AND JULIET?\n");
    printf("------------------------------------------------\n");
    printf("1. Dickens\n");
    printf("2. Chaucer\n");
    printf("3. Keats\n");
    printf("4. Shakespeare\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 11
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 11 : \n");
    printf(" WHAT IS THE LARGEST PLANET IN OUR SOLAR SYSTEM?\n");
    printf("------------------------------------------------\n");
    printf("1. Saturn\n");
    printf("2. Neptune\n");
    printf("3. Uranus\n");
    printf("4. Jupiter\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 12
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 12 : \n");
    printf(" WHAT IS H2O COMMONLY KNOWN AS?\n");
    printf("------------------------------------------------\n");
    printf("1. Salt\n");
    printf("2. Water\n");
    printf("3. Acid\n");
    printf("4. Oxygen\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");
    }

//QUESTION : 13
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 13 : \n");
    printf(" WHICH COUNTRY GIFTED THE STATUE OF LIBERTY TO THE USA?\n");
    printf("------------------------------------------------\n");
    printf("1. Germany\n");
    printf("2. France\n");
    printf("3. Italy\n");
    printf("4. Spain\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");
    }

//QUESTION : 14
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 14 : \n");
    printf(" WHAT IS THE HARDEST NATURAL SUBSTANCE ON EARTH?\n");
    printf("------------------------------------------------\n");
    printf("1. Gold\n");
    printf("2. Iron\n");
    printf("3. Ruby\n");
    printf("4. Diamond\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 15
    printf("================================================\n");
    printf("  DIFFICULTY : MEDIUM     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 15 : \n");
    printf(" HOW MANY CHROMOSOMES DO HUMANS HAVE?\n");
    printf("------------------------------------------------\n");
    printf("1. 23\n");
    printf("2. 44\n");
    printf("3. 48\n");
    printf("4. 46\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }
    printf("================================================\n");
    printf("               QUIZ ENDS HERE \n");
    printf("================================================\n");
    printf("        NAME : %s      SCORE : %d \n",a,score);
    printf("************************************************\n");
    goto c1;

    //hard
    hard:
    score=0;
    //QUESTION : 1
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 1 : \n");
    printf(" WHAT IS THE POWERHOUSE ENZYME THAT SYNTHESIZES ATP?\n");
    printf("------------------------------------------------\n");
    printf("1. Helicase\n");
    printf("2. Kinase\n");
    printf("3. Polymerase\n");
    printf("4. ATP Synthase\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 2
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 2 : \n");
    printf(" WHAT IS THE DERIVATIVE OF SIN(X)?\n");
    printf("------------------------------------------------\n");
    printf("1. -sin(x)\n");
    printf("2. tan(x)\n");
    printf("3. -cos(x)\n");
    printf("4. cos(x)\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 3
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 3 : \n");
    printf(" WHICH ELEMENT HAS ATOMIC NUMBER 79?\n");
    printf("------------------------------------------------\n");
    printf("1. Silver\n");
    printf("2. Platinum\n");
    printf("3. Mercury\n");
    printf("4. Gold\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 4
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 4 : \n");
    printf(" WHAT TREATY ENDED WORLD WAR I?\n");
    printf("------------------------------------------------\n");
    printf("1. Treaty of Paris\n");
    printf("2. Treaty of Rome\n");
    printf("3. Treaty of Berlin\n");
    printf("4. Treaty of Versailles\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 5
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 5 : \n");
    printf(" WHAT IS THE VALUE OF PI TO 4 DECIMAL PLACES?\n");
    printf("------------------------------------------------\n");
    printf("1. 3.1514\n");
    printf("2. 3.1416\n");
    printf("3. 3.1618\n");
    printf("4. 3.1212\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");
    }

//QUESTION : 6
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 6 : \n");
    printf(" WHO DEVELOPED THE THEORY OF GENERAL RELATIVITY?\n");
    printf("------------------------------------------------\n");
    printf("1. Newton\n");
    printf("2. Bohr\n");
    printf("3. Hawking\n");
    printf("4. Einstein\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 7
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 7 : \n");
    printf(" WHAT IS THE SI UNIT OF ELECTRIC RESISTANCE?\n");
    printf("------------------------------------------------\n");
    printf("1. Ampere\n");
    printf("2. Volt\n");
    printf("3. Watt\n");
    printf("4. Ohm\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 8
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 8 : \n");
    printf(" IN WHICH YEAR WAS THE MAGNA CARTA SIGNED?\n");
    printf("------------------------------------------------\n");
    printf("1. 1215\n");
    printf("2. 1305\n");
    printf("3. 1115\n");
    printf("4. 1415\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==1){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 1\n");
    }

//QUESTION : 9
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 9 : \n");
    printf(" WHAT IS THE LARGEST KNOWN PRIME NUMBER TYPE?\n");
    printf("------------------------------------------------\n");
    printf("1. Fibonacci\n");
    printf("2. Mersenne\n");
    printf("3. Fermat\n");
    printf("4. Euler\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==2){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 2\n");
    }

//QUESTION : 10
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 10 : \n");
    printf(" WHAT IS THE CHEMICAL FORMULA FOR SULFURIC ACID?\n");
    printf("------------------------------------------------\n");
    printf("1. HCl\n");
    printf("2. H2SO3\n");
    printf("3. H2O2\n");
    printf("4. H2SO4\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 11
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 11 : \n");
    printf(" WHICH PROGRAMMER WROTE THE FIRST ALGORITHM?\n");
    printf("------------------------------------------------\n");
    printf("1. Alan Turing\n");
    printf("2. Grace Hopper\n");
    printf("3. Ada Lovelace\n");
    printf("4. Charles Babbage\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==3){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 3\n");
    }

//QUESTION : 12
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 12 : \n");
    printf(" WHAT IS THE INTEGRAL OF 1/X?\n");
    printf("------------------------------------------------\n");
    printf("1. x^2\n");
    printf("2. e^x\n");
    printf("3. 1/x^2\n");
    printf("4. ln(x)\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 13
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 13 : \n");
    printf(" WHAT IS THE SCHRODINGER EQUATION USED FOR?\n");
    printf("------------------------------------------------\n");
    printf("1. Thermodynamics\n");
    printf("2. Relativity\n");
    printf("3. Nuclear Fission\n");
    printf("4. Quantum Mechanics\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 14
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 14 : \n");
    printf(" WHAT IS THE HALF-LIFE OF CARBON-14?\n");
    printf("------------------------------------------------\n");
    printf("1. 2,730 years\n");
    printf("2. 8,267 years\n");
    printf("3. 1,200 years\n");
    printf("4. 5,730 years\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }

//QUESTION : 15
    printf("================================================\n");
    printf("  DIFFICULTY : HARD     SCORE : %d\n",score);
    printf("================================================\n");
    printf("QUESTION 15 : \n");
    printf(" WHO PROPOSED THE HELIOCENTRIC MODEL OF THE SOLAR SYSTEM?\n");
    printf("------------------------------------------------\n");
    printf("1. Galileo\n");
    printf("2. Kepler\n");
    printf("3. Ptolemy\n");
    printf("4. Copernicus\n");
    printf("------------------------------------------------\n");
    printf("ENTER YOUR ANSWER :\n");
    scanf("%d",&answer);
    if(answer==4){
        printf("CORRECT ANSWER !\n");
        score+=4;
    }
    else{
        printf("WRONG ANSWER !  CORRECT ANSWER : 4\n");
    }
    printf("================================================\n");
    printf("               QUIZ ENDS HERE \n");
    printf("================================================\n");
    printf("        NAME : %s   SCORE : %d \n",a,score);
    printf("************************************************\n");
    goto c1;
}