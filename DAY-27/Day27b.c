//Write a program to Create employee record management system.
#include<stdio.h>
#include<string.h>
#define MAX 100
    struct employee{
        char name[50];
        int employeeno;
        int age;
        float salary;
        char designation[70];
    };
    int count=0;
    struct employee temployee[MAX];
    //FOR GETTING THE DESIGNATION
    char *getdesignation(float salary){
        if(salary>=90000&&salary<=100000)
        return "COO/CFO/CTO";
        else if(salary>=80000&&salary<=90000)
        return "Director/Vice President";
        else if(salary>=60000&&salary<=80000)
        return "General Manager (GM)";
        else if(salary>=40000&&salary<=60000)
        return "Manager/Team Lead";
        else if(salary>=0&&salary<=40000)
        return "Junior Associate/Developer/Analyst";
        else
        return "X";
        
    }
    //FOR SAVING DATA IN A FILE
    void filesave(){
        FILE*fp=fopen("EMPLOYEES.dat","wb");
        if(fp==NULL){
        printf("FILE DOES NOT EXIST!\n");
        return;
        }
        fwrite(&count,sizeof(int),1,fp);
        fwrite(temployee,sizeof(struct employee),count,fp);
        fclose(fp);
        printf("****ALL CHANGES SAVED****\n");
    }
    //LOADING ALL SAVED DATA
    void loadfile(){
        FILE *fp = fopen("EMPLOYEES.dat", "rb");
    if (fp == NULL) {
        printf("NO PREVIOUS DATA FOUND. STARTING FRESH.\n");
        return;
        }
    fread(&count, sizeof(int), 1, fp);
    fread(temployee, sizeof(struct employee), count, fp); 
    fclose(fp);
    printf("*** ALL SAVED RECORDS LOADED ***\n");
    }


    //FOR ADDING EMPLOYEES
    void add(){
        printf("********************************\n");
        printf("YOU ARE ADDING EMPLOYEE DETAILS :\n");
        printf("********************************\n");
        struct employee s;
        printf("ENTER NAME OF EMPLOYEE :\n");
        scanf(" %[^\n]",s.name);
        int duplicate;
        do {
        printf("ENTER THE EMPLOYEE NO. OF EMPLOYEE :\n");
        scanf("%d", &s.employeeno);

        duplicate = 0; 

        for (int i = 0; i < count; i++) {
            if (s.employeeno == temployee[i].employeeno) {
                duplicate = 1; 
                printf("EMPLOYEE NO. ALREADY EXISTS!\n");
                printf("PLEASE RE-ENTER THE EMPLOYEE NO.\n");
                break;
            }
        }

        } while (duplicate == 1);
        do{
            printf("ENTER THE AGE OF EMPLOYEE :\n");
            scanf("%d",&s.age);
            if(s.age>60||s.age<18){
                printf("INVALID AGE ! \n");
            }
        }while (s.age>60||s.age<18);
        do{
            printf("ENTER THE SALARY OF EMPLOYEES :\n");
            scanf("%f",&s.salary);
            if(s.salary<0||s.salary>100000){
                printf("SALARY SHOLUD BE BETWEEN 0 TO 100000\n");
            }
        }while(s.salary<0||s.salary>100000);
        strcpy(s.designation, getdesignation(s.salary));
        temployee[count++]=s;
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
            if(temployee[i].employeeno==search){
                printf("DETAILS OF EMPLOYEE :\n");
                printf("NAME : %s\n",temployee[i].name);
                printf("EMPLOYEE NO. : %d\n",temployee[i].employeeno);
                printf("AGE : %d\n",temployee[i].age);
                printf("SALARY : %.2f\n",temployee[i].salary);
                printf("DESIGNATION : %s\n",temployee[i].designation);
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
            if(temployee[i].employeeno==search){
                for(int j=i;j<count-1;j++){
                    temployee[j]=temployee[j+1];
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
            if(temployee[i].employeeno==search){
                option1:
                printf("CHOOSE FROM OPTION TO UPDATE :\n");
                printf("PRESS '1' | CHANGE NAME\n");
                printf("PRESS '2' | CHANGE EMPLOYEE NO.\n");
                printf("PRESS '3' | CHANGE AGE\n");
                printf("PRESS '4' | CHANGE SALARY\n");
                printf("PRESS '5' | GO BACK TO MAIN MENU\n");
                scanf("%d",&option1);
                switch (option1)
                {
                case 1 :
                    printf("YOU ARE UPDATING THE NAME OF EMPLOYEES\n");
                    printf("ENTER NEW NAME :\n");
                    scanf(" %[^\n]",temployee[i].name);
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
                            if (neweno == temployee[k].employeeno) {
                            duplicate = 1; 
                            printf("EMPLOYEE NO. ALREADY EXISTS!\n");
                            break;
                            }
                        }
                    }while (duplicate==1);
                    temployee[i].employeeno=neweno;
                    printf("******NEW EMPLOYEE NO. UPDATED******\n");
                    printf("******EMPLOYEES DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 3 :
                    do{
                        printf("ENTER THE AGE OF EMPLOYEE :\n");
                        scanf("%d",&newage);
                        if(newage>60||newage<18){
                        printf("INVALID AGE ! \n");
                        }
                    }while (newage>60||newage<18);
                    temployee[i].age=newage;
                    printf("******NEW AGE UPDATED******\n");
                    printf("******EMPLOYEES DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 4 :
                    printf("YOU ARE UPDATING THE SALARY OF EMPLOYEES\n");
                    do{
                       printf("ENTER THE SALARY OF EMPLOYEES :\n");
                       scanf("%f",&temployee[i].salary);
                       if(temployee[i].salary<0||temployee[i].salary>100000){
                       printf("SALARY SHOLUD BE BETWEEN 0 TO 100000\n");
                        }
                    }while(temployee[i].salary<0||temployee[i].salary>100000);
                    strcpy(temployee[i].designation,getdesignation(temployee[i].salary));
                    printf("******EMPLOYEES DETAILS UPDATED******\n");
                    filesave();
                    goto option1;  
                case 5 :
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
            printf("NAME : %s\n",temployee[i].name);
            printf("EMPLOYEE NO. : %d\n",temployee[i].employeeno);
            printf("AGE : %d\n",temployee[i].age);
            printf("SALARY : %.2f\n",temployee[i].salary);
            printf("DESIHNATION : %s\n",temployee[i].designation);
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



