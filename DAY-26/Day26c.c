//Write a program to Create ATM simulation
#include<stdio.h>
int main(){
    int choice1,pin=5734,epin,attempt=0,i,choice2;
    double balance=0,deposit,withdraw;
    atm:
    attempt=0;
    printf("*****ATM SIMULATION*****\n");
    printf("LOG IN TO THE ACCOUNT\n");
    printf("ENTER THE PIN :\n");
    for(i=0;i<3;i++){
        scanf("%d",&epin);
        attempt++;
        if(epin==pin){
            printf("PIN ENTERED IS CORRECT.\n");
            goto option;
        }
        else{
            printf("PIN ENTERED IS INCOORECT.\n");
            printf("REENTER THE PIN :\n");
        }
    }
    if(attempt==3){
        printf("ATTEMPTS EXCEEDED!\n");
        printf("CLOSING THE ATM\n");
        return 0;
    }
    option:
    printf("CHOOSE FROM THE FOLLOWING OPTIONS :\n");
    printf("PRESS '1' : FOR CHECKING BANK BALANCE\n");
    printf("PRESS '2' : FOR DEPOSITING CASH\n");
    printf("PRESS '3' : FOR WITHDRAWAL OF CASH\n");
    printf("PRESS '4' : FOR SIGNING OUT OF ACCOUNT\n");
    scanf("%d",&choice1);
    switch (choice1)
    {
    case 1:
        printf("***AMOUNT DEPOSITED IN BANK : %d***\n",balance);
        option2:
        printf("PRESS '1' :FOR SELCTION OF OPTION AGAIN\n");
        printf("PRESS '2' :FOR SIGNING OUT OF ACCOUNT\n");
        scanf("%d",&choice2);
        if(choice2==1){
            goto option;
        }
        else if(choice2 ==2){
        printf("CLOSING THE ATM\n");
        return 0;    
        }
        break;
    case 2:
        printf("ENTER THE AMOUNT TO BE DEPOSITED :\n");
        scanf("%lf",&deposit);
        while(deposit<0){
            printf("INVALID INPUT! PLEASE REENTER THE AMOUNT:\n");
            scanf("%lf",&deposit);
        }
        if(deposit>=0){
        balance+=deposit;}
        printf("CURRENT BANK BALANCE : %lf\n",balance);
        goto option2;
    case 3:
        if (balance <= 0) {         
                printf("INSUFFICIENT BALANCE! CANNOT WITHDRAW.\n");
                goto option2;
            }
        printf("ENTER THE AMOUNT TO BE WITHDRAWN :\n");
        scanf("%lf",&withdraw);
        while(withdraw<0){
            printf("INVALID INPUT! PLEASE REENTER THE AMOUNT:\n");
            scanf("%lf",&withdraw);
        }
        if(withdraw>=0){
        balance-=withdraw;}
        printf("CURRENT BANK BALANCE : %lf\n",balance);
        goto option2;
    case 4:
        printf("YOU ARE SIGNING OUT OF YOUR ACCOUNT :\n");
        goto atm;
    default:
        printf("YOU HAVE GIVEN WRONG INPUT. \n");
        printf("PLEASE RENTER THE OPTION\n");
        goto option;
    }
    return 0;
    
}
