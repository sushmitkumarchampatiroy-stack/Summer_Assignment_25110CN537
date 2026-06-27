//Write a program to Create salary management system.
#include<stdio.h>
#include<string.h>
#define MAX 100
    struct salary{
        char name[50];
        int employeecode;
        float grosssalary;
        float ctc;
        float hra;
        float pf;
        float lta;
        float gratuity;
        float specialallowance;
        float basicsalary;
    };
    int count=0;
    struct salary tsalary[MAX];
    //GROSS SALARY
    float gross(float basic,float house,float l,float special){
        return basic+house+l+special;
    }
    //BASIC SALARY
    float basic(float ctc){
        return (ctc*50)/100;
    }
    //SPECIAL ALLOWANCE
    float special(float ctc,float basic,float gra,float l,float fund,float house){
        return ctc-(basic+fund+gra+house+l);
    }
    //GRATUITY
    float gra(float ctc){
        return (ctc*2.405)/100;
    }
    //LTA
    float l(float ctc){
        return 3000;
    }
    //PF
    float fund(float ctc){
        return (ctc*6)/100;
    }
    //HRA
    float house(float ctc){
        return (ctc*25)/100;
    }
    //FOR SAVING DATA IN A FILE
    void filesave(){
        FILE*fp=fopen("SALARY.dat","wb");
        if(fp==NULL){
        printf("FILE DOES NOT EXIST!\n");
        return;
        }
        fwrite(&count,sizeof(int),1,fp);
        fwrite(tsalary,sizeof(struct salary),count,fp);
        fclose(fp);
        printf("****ALL CHANGES SAVED****\n");
    }
    //LOADING ALL SAVED DATA
    void loadfile(){
        FILE *fp = fopen("SALARY.dat", "rb");
    if (fp == NULL) {
        printf("NO PREVIOUS DATA FOUND. STARTING FRESH.\n");
        return;
        }
    fread(&count, sizeof(int), 1, fp);
    fread(tsalary, sizeof(struct salary), count, fp); 
    fclose(fp);
    printf("*** ALL SAVED RECORDS LOADED ***\n");
    }
    //FOR ADDING EMPLOYEES
    void add(){
        printf("********************************\n");
        printf("YOU ARE ADDING EMPLOYEE DETAILS :\n");
        printf("********************************\n");
        struct salary s;
        printf("ENTER NAME OF EMPLOYEE :\n");
        scanf(" %[^\n]",s.name);
        int duplicate;
        do {
        printf("ENTER THE EMPLOYEE NO. OF EMPLOYEE :\n");
        scanf("%d", &s.employeecode);

        duplicate = 0; 

        for (int i = 0; i < count; i++) {
            if (s.employeecode == tsalary[i].employeecode) {
                duplicate = 1; 
                printf("EMPLOYEE NO. ALREADY EXISTS!\n");
                printf("PLEASE RE-ENTER THE EMPLOYEE NO.\n");
                break;
            }
        }

        } while (duplicate == 1);
        printf("ENTER THE CTC OF EMPLOYEES :\n");
        scanf("%f",&s.ctc);
        s.basicsalary=basic(s.ctc);
        s.gratuity=gra(s.ctc);
        s.hra=house(s.ctc);
        s.lta=l(s.ctc);
        s.pf=fund(s.ctc);
        s.specialallowance=special(s.ctc,s.hra,s.basicsalary,s.gratuity,s.lta,s.pf);
        s.grosssalary=gross(s.basicsalary,s.hra,s.lta,s.specialallowance);
        tsalary[count++]=s;
        printf("*****NEW EMPLOYEE ADDED*****\n");
        filesave();
        return;
    }
    //FOR SEARCHING EMPLOYEES
    void search(){
        int search;
        printf("********************************\n");
        printf("YOU ARE SEARCHING DETAILS OF EMPLOYEE\n");
        printf("********************************\n");
        printf("ENTER THE EMPLOYEE NO. OF EMPLOYEE :\n");
        scanf("%d",&search);
        for(int i=0;i<count;i++){
            if(tsalary[i].employeecode==search){
                printf("DETAILS OF EMPLOYEE :\n");
                printf("NAME : %s\n",tsalary[i].name);
                printf("EMPLOYEE NO. : %d\n",tsalary[i].employeecode);
                printf("CTC : %f\n",tsalary[i].ctc);
                printf("BASIC SALARY : %f\n",tsalary[i].basicsalary);
                printf("PROVIDENT FUND : %f\n",tsalary[i].pf);
                printf("HOUSE RENT ALLOWANCE : %f\n",tsalary[i].hra);
                printf("GRATUITY : %f\n",tsalary[i].gratuity);
                printf("SPECIAL ALOOWANCE : %f\n",tsalary[i].specialallowance);
                printf("GROSS SALARY : %f\n",tsalary[i].grosssalary);
                return;
            }
        }

        printf("EMPLOYEE NOT FOUND!\n");
        return;
    }
    //FOR DELETING EMPLOYEES
    void del(){
        int search,swap;
        printf("********************************\n");
        printf("YOU ARE DELETING DETAILS OF EMPLOYEE\n");
        printf("********************************\n");
        printf("ENTER THE EMPLOYEE NO. OF EMPLOYEE :");
        scanf("%d",&search);
        
        for(int i=0;i<count;i++){
            if(tsalary[i].employeecode==search){
                for(int j=i;j<count-1;j++){
                    tsalary[j]=tsalary[j+1];
                }
                count--;
                printf("******EMPLOYEES DETAILS DELETED******\n");
                filesave();
                return;
            }
        }
        printf("EMPLOYEE NOT FOUND!\n");
    }
    //UPDATE EMPLOYEES
    void update(){
        int search,option1,duplicate,neweno,newage;
        printf("********************************\n");
        printf("YOU ARE UPDATING DETAILS OF EMPLOYEE\n");
        printf("********************************\n");
        printf("ENTER THE EMPLOYEE NO. OF EMPLOYEE :");
        scanf("%d",&search);
        for(int i=0;i<count;i++){
            if(tsalary[i].employeecode==search){
                option1:
                printf("CHOOSE FROM OPTION TO UPDATE :\n");
                printf("PRESS '1' | CHANGE NAME\n");
                printf("PRESS '2' | CHANGE EMPLOYEE NO.\n");
                printf("PRESS '3' | CHANGE CTC\n");
                printf("PRESS '4' | GO BACK TO MAIN MENU\n");
                scanf("%d",&option1);
                switch (option1)
                {
                case 1 :
                    printf("YOU ARE UPDATING THE NAME OF EMPLOYEES\n");
                    printf("ENTER NEW NAME :\n");
                    scanf(" %[^\n]",tsalary[i].name);
                    printf("******NEW NAME UPDATED******\n");
                    printf("******EMPLOYEES DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 2 :
                    printf("YOU ARE UPDATING THE EMPLOYEE NO. OF EMPLOYEES\n");
                    do {
                        printf("ENTER THE EMPLOYEE NO. OF EMPLOYEE :\n");
                        scanf("%d", &neweno);

                        duplicate = 0; 

                        for (int k = 0; k < count; k++) {
                            if (neweno == tsalary[k].employeecode) {
                            duplicate = 1; 
                            printf("EMPLOYEE NO. ALREADY EXISTS!\n");
                            break;
                            }
                        }
                    }while (duplicate==1);
                    tsalary[i].employeecode=neweno;
                    printf("******NEW EMPLOYEE NO. UPDATED******\n");
                    printf("******EMPLOYEES DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 3 :
                    printf("YOU ARE UPDATING THE SALARY OF EMPLOYEES\n");
                    do{
                       printf("ENTER THE CTC OF EMPLOYEES :\n");
                       scanf("%f",&tsalary[i].ctc);
                       if(tsalary[i].ctc<0){
                       printf("SALARY SHOLUD BE ABOVE 0\n");
                        }
                    }while(tsalary[i].ctc<0);
                    tsalary[i].basicsalary=basic(tsalary[i].ctc);
                    tsalary[i].gratuity=gra(tsalary[i].ctc);
                    tsalary[i].hra=house(tsalary[i].ctc);
                    tsalary[i].lta=l(tsalary[i].ctc);
                    tsalary[i].pf=fund(tsalary[i].ctc);
                    tsalary[i].specialallowance=special(tsalary[i].ctc,tsalary[i].hra,tsalary[i].basicsalary,tsalary[i].gratuity,tsalary[i].lta,tsalary[i].pf);
                    tsalary[i].grosssalary=gross(tsalary[i].basicsalary,tsalary[i].hra,tsalary[i].lta,tsalary[i].specialallowance);
                    printf("******EMPLOYEES DETAILS UPDATED******\n");
                    filesave();
                    goto option1;  
                case 4 :
                    printf("GOING TO MAIN MENU\n");
                    return;  
                default:
                    printf("INVALID INPUT!  RENTER THE OPTION\n");
                    goto option1;
                }
                
            }

        }
        printf("EMPLOYEE NOT FOUND!\n");
        return;
    }
    //DISPALYING ALL EMPLOYEE DETAILS
     void display(){
        if(count==0)
        printf("NO EMPLOYEE ADDED ! \n");
        else{
        printf("********************************\n");
        printf("DISPLAYING DETAILS OF EMPLOYEE\n");
        printf("********************************\n");
        for(int i=0;i<count;i++){
            printf("********************************\n");
            printf("NAME : %s\n",tsalary[i].name);
            printf("EMPLOYEE NO. : %d\n",tsalary[i].employeecode);
            printf("CTC : %f\n",tsalary[i].ctc);
            printf("BASIC SALARY : %f\n",tsalary[i].basicsalary);
            printf("PROVIDENT FUND : %f\n",tsalary[i].pf);
            printf("HOUSE RENT ALLOWANCE : %f\n",tsalary[i].hra);
            printf("GRATUITY : %f\n",tsalary[i].gratuity);
            printf("SPECIAL ALOOWANCE : %f\n",tsalary[i].specialallowance);
            printf("GROSS SALARY : %f\n",tsalary[i].grosssalary);
            printf("********************************\n");
        }
    }
    }
    int main(){
        loadfile();
        int option;
        printf("=========================================\n");
        printf("      EMPLOYEE MANAGEMENT SYSTEM \n");
        printf("=========================================\n");
        option:
                printf("CHOOSE FROM THE FOLLOWING OPTION :\n");
                printf("PRESS '1' | FOR ADDING EMPLOYEE DETAILS\n");
                printf("PRESS '2' | FOR DELETING EMPLOYEE DETAILS\n");
                printf("PRESS '3' | FOR SEARCHING EMPLOYEE DETAILS\n");
                printf("PRESS '4' | FOR DISPLAYING DETAILS OF ALL EMPLOYEES\n");
                printf("PRESS '5' | FOR UPDATING EMPLOYEES DETAILS\n");
                printf("PRESS '6' | EXIT\n");
                scanf("%d",&option);
                getchar();
                switch (option)
                {
                case 1:
                    add();
                    goto option;
                case 2:
                    del();
                    goto option;
                case 3:
                    search();
                    goto option;
                case 4:
                    display();
                    goto option;
                case 5:
                    update();
                    goto option;
                case 6:
                    printf("YOU ARE EXITING THE EMPLOYEE MANAGEMENT SYSTEM\n");
                    filesave();
                    return 0;
                default:
                    printf("INVALID INPUT !  RENTER YOUR CHOICE:\n");
                    goto option;
                }
    }
