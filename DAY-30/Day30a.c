//Write a program to Create student record management system.
#include<stdio.h>
#include<string.h>
#define MAX 100
    struct student{
        char name[50];
        int rollno;
        int age;
        float marks;
        char grade;
    };
    int count=0;
    struct student tstudent[MAX];
    //FOR GETTING THE GRADE
    char getgrade(float grade){
        if(grade>=90&&grade<=100)
        return 'A';
        else if(grade>=80&&grade<=90)
        return 'B';
        else if(grade>=60&&grade<=80)
        return 'C';
        else if(grade>=40&&grade<=60)
        return 'D';
        else if(grade>=0&&grade<=40)
        return 'E';
        else
        return 'X';
        
    }
    //FOR SAVING DATA IN A FILE
    void filesave(){
        FILE*fp=fopen("STUDENTS.dat","wb");
        if(fp==NULL){
        printf("FILE DOES NOT EXIST!\n");
        return;
        }
        fwrite(&count,sizeof(int),1,fp);
        fwrite(tstudent,sizeof(struct student),count,fp);
        fclose(fp);
        printf("****ALL CHANGES SAVED****\n");
    }
    //LOADING ALL SAVED DATA
    void loadfile(){
        FILE *fp = fopen("STUDENTS.dat", "rb");
    if (fp == NULL) {
        printf("NO PREVIOUS DATA FOUND. STARTING FRESH.\n");
        return;
        }
    fread(&count, sizeof(int), 1, fp);
    fread(tstudent, sizeof(struct student), count, fp); 
    fclose(fp);
    printf("*** ALL SAVED RECORDS LOADED ***\n");
    }


    //FOR ADDING STUDENTS
    void add(){
        printf("********************************\n");
        printf("YOU ARE ADDING STUDENT DETAILS :\n");
        printf("********************************\n");
        struct student s;
        printf("ENTER NAME OF STUDENT :\n");
        scanf("%[^\n]",s.name);
        int duplicate;
        do {
        printf("ENTER THE ROLL NO. OF STUDENT :\n");
        scanf("%d", &s.rollno);

        duplicate = 0; 

        for (int i = 0; i < count; i++) {
            if (s.rollno == tstudent[i].rollno) {
                duplicate = 1; 
                printf("ROLL NO. ALREADY EXISTS!\n");
                printf("PLEASE RE-ENTER THE ROLL NO.\n");
                break;
            }
        }

        } while (duplicate == 1);
        printf("ENTER THE AGE OF STUDENT :\n");
        scanf("%d",&s.age);
        do{
            printf("ENTER THE MARKS OF STUDENTS :\n");
            scanf("%f",&s.marks);
            if(s.marks<0||s.marks>100){
                printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
            }
        }while(s.marks<0||s.marks>100);
        
        s.grade=getgrade(s.marks);
        tstudent[count++]=s;
        printf("*****NEW STUDENT ADDED*****\n");
        filesave();
        return;
    }
    //FOR SEARCHING STUDENTS
    void search(){
        int search;
        printf("********************************\n");
        printf("YOU ARE SEARCHING DETAILS OF STUDENT\n");
        printf("********************************\n");
        printf("ENTER THE ROLL NO. OF STUDENT :\n");
        scanf("%d",&search);
        for(int i=0;i<count;i++){
            if(tstudent[i].rollno==search){
                printf("DETAILS OF STUDENT :\n");
                printf("NAME : %s\n",tstudent[i].name);
                printf("ROLL NO. : %d\n",tstudent[i].rollno);
                printf("AGE : %d\n",tstudent[i].age);
                printf("MARKS : %.2f\n",tstudent[i].marks);
                printf("GRADE : %c\n",tstudent[i].grade);
                return;
            }
        }
        printf("STUDENT NOT FOUND!\n");
        return;
    }
    //FOR DELETING STUDENTS
    void del(){
        int search,swap;
        printf("********************************\n");
        printf("YOU ARE DELETING DETAILS OF STUDENT\n");
        printf("********************************\n");
        printf("ENTER THE ROLL NO. OF STUDENT :");
        scanf("%d",&search);
        
        for(int i=0;i<count;i++){
            if(tstudent[i].rollno==search){
                for(int j=i;j<count-1;j++){
                    tstudent[j]=tstudent[j+1];
                }
                count--;
                printf("******STUDENTS DETAILS DELETED******\n");
                filesave();
                return;
            }
        }
        printf("STUDENT NOT FOUND!\n");
    }

    //UPDATE STUDENTS
    void update(){
        int search,option1,duplicate,newroll;
        printf("********************************\n");
        printf("YOU ARE UPDATING DETAILS OF STUDENT\n");
        printf("********************************\n");
        printf("ENTER THE ROLL NO. OF STUDENT :");
        scanf("%d",&search);
        for(int i=0;i<count;i++){
            if(tstudent[i].rollno==search){
                option1:
                printf("CHOOSE FROM OPTION TO UPDATE :\n");
                printf("PRESS '1' | CHANGE NAME\n");
                printf("PRESS '2' | CHANGE ROLL NO.\n");
                printf("PRESS '3' | CHANGE AGE\n");
                printf("PRESS '4' | CHANGE MARKS\n");
                printf("PRESS '5' | GO BACK TO MAIN MENU\n");
                scanf("%d",&option1);
                switch (option1)
                {
                case 1 :
                    printf("YOU ARE UPDATING THE NAME OF STUDENTS\n");
                    printf("ENTER NEW NAME :\n");
                    scanf(" %[^\n]",tstudent[i].name);
                    printf("******NEW NAME UPDATED******\n");
                    printf("******STUDENTS DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 2 :
                    printf("YOU ARE UPDATING THE ROLL NO. OF STUDENTS\n");
                    do {
                        printf("ENTER THE ROLL NO. OF STUDENT :\n");
                        scanf("%d", &newroll);

                        duplicate = 0; 

                        for (int k = 0; k < count; k++) {
                            if (k != i && tstudent[k].rollno == newroll) {
                            duplicate = 1; 
                            printf("ROLL NO. ALREADY EXISTS!\n");
                            printf("PLEASE RE-ENTER THE ROLL NO.\n");
                            break;
                            }
                        }
                    }while (duplicate==1);
                    tstudent[i].rollno=newroll;
                    printf("******NEW ROLL NO. UPDATED******\n");
                    printf("******STUDENTS DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 3 :
                    printf("YOU ARE UPDATING THE AGE OF STUDENTS\n");
                    printf("ENTER NEW AGE :\n");
                    scanf("%d",&tstudent[i].age);
                    printf("******NEW AGE UPDATED******\n");
                    printf("******STUDENTS DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 4 :
                    printf("YOU ARE UPDATING THE MARKS OF STUDENTS\n");
                    do{
                       printf("ENTER THE MARKS OF STUDENTS :\n");
                       scanf("%f",&tstudent[i].marks);
                       if(tstudent[i].marks<0||tstudent[i].marks>100){
                       printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
                        }
                    }while(tstudent[i].marks<0||tstudent[i].marks>100);
                    tstudent[i].grade=getgrade(tstudent[i].marks);
                    printf("******STUDENTS DETAILS UPDATED******\n");
                    filesave();
                    goto option1;  
                case 5 :
                    printf("GOING TO MAIN MENU\n");
                    return;  
                default:
                    printf("INVALID INPUT!  RENTER THE OPTION\n");
                    goto option1;
                }
                return;
            }
        }
    }
    //DISPALYING ALL STUDENT DETAILS
     void display(){
        if(count==0)
        printf("NO STUDENT ADDED ! \n");
        else{
            printf("\n");
            printf("+---------------------------------------------------------------------------------------+\n");
            printf("|                                STUDENT RECORD MANAGEMENT SYSTEM                        |\n");
            printf("+----+--------------------------+------------+------+-----------+-----------------------+\n");
            printf("| ID | Name                     | Roll No.   | Age  | Marks (%) | Grade                 |\n");
            printf("+----+--------------------------+------------+------+-----------+-----------------------+\n");
            for(int i = 0; i < count; i++){
            printf("| %-2d | %-24s | %-10d | %-4d | %-9.2f | %-8c |\n",i + 1,tstudent[i].name,tstudent[i].rollno,tstudent[i].age,tstudent[i].marks,tstudent[i].grade);
        }

           printf("+----+--------------------------+------------+------+-----------+-----------------------+\n");
    }
}
    int main(){
        loadfile();
        int option;
        printf("=========================================\n");
        printf("      STUDENT MANAGEMENT SYSTEM \n");
        printf("=========================================\n");
        option:
                printf("CHOOSE FROM THE FOLLOWING OPTION :\n");
                printf("PRESS '1' | FOR ADDING STUDENT DETAILS\n");
                printf("PRESS '2' | FOR DELETING STUDENT DETAILS\n");
                printf("PRESS '3' | FOR SEARCHING STUDENT DETAILS\n");
                printf("PRESS '4' | FOR DISPLAYING DETAILS OF ALL STUDENTS\n");
                printf("PRESS '5' | FOR UPDATING STUDENTS DETAILS\n");
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
                    printf("YOU ARE EXITING THE STUDENT MANAGEMENT SYSTEM\n");
                    filesave();
                    return 0;
                default:
                    printf("INVALID INPUT !  RENTER YOUR CHOICE:\n");
                    goto option;
                }
    }


