//Write a program to Create marksheet generation system.
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
    struct subject{
        float phy;
        float chem;
        float eng;
        float math;
        float computerscience;
        char gradeP;
        char gradeC;
        char gradeM;
        char gradeE;
        char gradeCS;
    };
    int count=0;
    struct subject tsubject[MAX];
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
        FILE*fp=fopen("MARKS.dat","wb");
        if(fp==NULL){
        printf("FILE DOES NOT EXIST!\n");
        return;
        }
        fwrite(&count,sizeof(int),1,fp);
        fwrite(tstudent,sizeof(struct student),count,fp);
        fwrite(tsubject, sizeof(struct subject), count, fp);
        fclose(fp);
        printf("****ALL CHANGES SAVED****\n");
    }
    //LOADING ALL SAVED DATA
    void loadfile(){
        FILE *fp = fopen("MARKS.dat", "rb");
    if (fp == NULL) {
        printf("NO PREVIOUS DATA FOUND. STARTING FRESH.\n");
        return;
        }
    fread(&count, sizeof(int), 1, fp);
    fread(tstudent, sizeof(struct student), count, fp); 
    fread(tsubject, sizeof(struct subject), count, fp); 
    fclose(fp);
    printf("*** ALL SAVED RECORDS LOADED ***\n");
    }


    //FOR ADDING STUDENTS
    void add(){
        printf("********************************\n");
        printf("YOU ARE ADDING STUDENT DETAILS :\n");
        printf("********************************\n");
        struct student s;
        struct subject t;
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
        printf("ENTER THE MARKS OF STUDENT :\n");
        do{
            printf("ENTER THE MARKS IN PHYSICS :\n");
            scanf("%f",&t.phy);
            if(t.phy<0||t.phy>100){
                printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
            }
        }while(t.phy<0||t.phy>100);
        do{
            printf("ENTER THE MARKS IN CHEMISTRY :\n");
            scanf("%f",&t.chem);
            if(t.chem<0||t.chem>100){
                printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
            }
        }while(t.chem<0||t.chem>100);
        do{
            printf("ENTER THE MARKS IN MATHEMATICS :\n");
            scanf("%f",&t.math);
            if(t.math<0||t.math>100){
                printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
            }
        }while(t.math<0||t.math>100);
        do{
            printf("ENTER THE MARKS IN ENGLISH :\n");
            scanf("%f",&t.eng);
            if(t.eng<0||t.eng>100){
                printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
            }
        }while(t.eng<0||t.eng>100);
        do{
            printf("ENTER THE MARKS IN COMPUTER SCIENCE :\n");
            scanf("%f",&t.computerscience);
            if(t.computerscience<0||t.computerscience>100){
                printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
            }
        }while(t.computerscience<0||t.computerscience>100);
        t.gradeP=getgrade(t.phy);
        t.gradeC=getgrade(t.chem);
        t.gradeM=getgrade(t.math);
        t.gradeE=getgrade(t.eng);
        t.gradeCS=getgrade(t.computerscience);
        s.marks=((t.phy+t.chem+t.math+t.eng+t.computerscience)/500)*100;
        s.grade=getgrade(s.marks);
        tstudent[count]=s;
        tsubject[count]=t;
        count++;
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
                printf("\n");
            printf("+-------------------------------------------------------------+\n");
            printf("|                    MARKSHEET GENERATED                      |\n");
            printf("+-------------------------------------------------------------+\n");
            printf("|Name : %-28sMarks (%): %f      |\n",tstudent[i].name,tstudent[i].marks);
            printf("|Roll No. : %-24dGrade : %c                 |\n",tstudent[i].rollno,tstudent[i].grade);
            printf("|AGE : %d                                                     |\n",tstudent[i].age);
            printf("+-------------------------------------------------------------+\n");
            printf("+------+------------------------+-----------------+-----------+\n");
            printf("|S no. |        SUBJECT         |MARKS(OUT OF 100)|   GRADE   |\n");
            printf("+------+------------------------+-----------------+-----------+\n");
            printf("|  1.  |PHYSICS                 | %-15f |%-10c |\n",tsubject[i].phy,tsubject[i].gradeP);
            printf("|  2.  |CHEMISTRY               | %-15f |%-10c |\n",tsubject[i].chem,tsubject[i].gradeC);
            printf("|  3.  |MATHEMATICS             | %-15f |%-10c |\n",tsubject[i].math,tsubject[i].gradeM);
            printf("|  4.  |ENGLISH                 | %-15f |%-10c |\n",tsubject[i].eng,tsubject[i].gradeE);
            printf("|  5.  |COMPUTER SCIENCE        | %-15f |%-10c |\n",tsubject[i].computerscience,tsubject[i].gradeCS);
            printf("+------+------------------------+-----------------+-----------+\n");
    
                /*printf("DETAILS OF STUDENT :\n");
                printf("NAME : %s\n",tstudent[i].name);
                printf("ROLL NO. : %d\n",tstudent[i].rollno);
                printf("AGE : %d\n",tstudent[i].age);
                printf("MARKS : %.2f\n",tstudent[i].marks);
                printf("GRADE : %c\n",tstudent[i].grade);
                printf("MARKS IN EACH SUBJECT : \n");
                printf("PHYSICS= %f",tsubject[i].phy);
                printf("CHEMISTRY= %f",tsubject[i].phy);
                printf("MATHEMATICS= %f",tsubject[i].phy);
                printf("ENGLISH= %f",tsubject[i].phy);
                printf("COMPUTER SCIENCE= %f",tsubject[i].phy);*/

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
        int search,option1,duplicate,newroll,option2;
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
                printf("PRESS '4' | CHANGE MARKS OF ANY SUBJECT\n");
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
                    option2:
                    printf("YOU ARE UPDATING THE MARKS OF STUDENTS\n");
                    printf("CHOOSE THE SUBJECT YOU WANT TO CHANGE MARKS :\n");
                    printf("PRESS '1' | CHANGE PHYSICS MARKS\n");
                    printf("PRESS '2' | CHANGE CHEMISTRY MARKS\n");
                    printf("PRESS '3' | CHANGE MATHEMATICS MARKS\n");
                    printf("PRESS '4' | CHANGE ENGLISH MARKS\n");
                    printf("PRESS '5' | CHANGE COMPUTER SCIENCE MARKS\n");
                    printf("PRESS '6' | GO BACK TO PREVIOUS MENU");
                    scanf("%d",&option2);
                    switch (option2)
                    {
                    case 1 :
                        do{
                       printf("ENTER THE MARKS OF PHYSICS :\n");
                       scanf("%f",&tsubject[i].phy);
                       if(tsubject[i].phy<0||tsubject[i].phy>100){
                       printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
                        }
                    }while(tsubject[i].phy<0||tsubject[i].phy>100);
                    tsubject[i].gradeP=getgrade(tsubject[i].phy);
                    tstudent[i].marks=((tsubject[i].phy+tsubject[i].chem+tsubject[i].math+tsubject[i].eng+tsubject[i].computerscience)/500)*100;
                    tstudent[i].grade=getgrade(tstudent[i].marks);
                    printf("******STUDENTS MARKS UPDATED******\n");
                    filesave();
                    goto option2;
                    case 2 :
                        do{
                       printf("ENTER THE MARKS OF CHEMISTRY :\n");
                       scanf("%f",&tsubject[i].chem);
                       if(tsubject[i].chem<0||tsubject[i].chem>100){
                       printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
                        }
                    }while(tsubject[i].chem<0||tsubject[i].chem>100);
                    tsubject[i].gradeC=getgrade(tsubject[i].chem);
                    tstudent[i].marks=((tsubject[i].phy+tsubject[i].chem+tsubject[i].math+tsubject[i].eng+tsubject[i].computerscience)/500)*100;
                    tstudent[i].grade=getgrade(tstudent[i].marks);
                    printf("******STUDENTS MARKS UPDATED******\n");
                    filesave();
                    goto option2;
                    case 3 :
                        do{
                       printf("ENTER THE MARKS OF MATHEMATICS :\n");
                       scanf("%f",&tsubject[i].math);
                       if(tsubject[i].math<0||tsubject[i].math>100){
                       printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
                        }
                    }while(tsubject[i].math<0||tsubject[i].math>100);
                    tsubject[i].gradeM=getgrade(tsubject[i].math);
                    tstudent[i].marks=((tsubject[i].phy+tsubject[i].chem+tsubject[i].math+tsubject[i].eng+tsubject[i].computerscience)/500)*100;
                    tstudent[i].grade=getgrade(tstudent[i].marks);
                    printf("******STUDENTS MARKS UPDATED******\n");
                    filesave();
                    goto option2;
                    case 4 :
                        do{
                       printf("ENTER THE MARKS OF ENGLISH :\n");
                       scanf("%f",&tsubject[i].eng);
                       if(tsubject[i].eng<0||tsubject[i].eng>100){
                       printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
                        }
                    }while(tsubject[i].eng<0||tsubject[i].eng>100);
                    tsubject[i].gradeE=getgrade(tsubject[i].eng);
                    tstudent[i].marks=((tsubject[i].phy+tsubject[i].chem+tsubject[i].math+tsubject[i].eng+tsubject[i].computerscience)/500)*100;
                    tstudent[i].grade=getgrade(tstudent[i].marks);
                    printf("******STUDENTS MARKS UPDATED******\n");
                    filesave();
                    goto option2;
                    case 5 :
                        do{
                       printf("ENTER THE MARKS OF COMPUTER SCIENCE :\n");
                       scanf("%f",&tsubject[i].computerscience);
                       if(tsubject[i].computerscience<0||tsubject[i].computerscience>100){
                       printf("MARKS SHOLUD BE BETWEEN 0 TO 100\n");
                        }
                    }while(tsubject[i].computerscience<0||tsubject[i].computerscience>100);
                    tsubject[i].gradeCS=getgrade(tsubject[i].computerscience);
                    tstudent[i].marks=((tsubject[i].phy+tsubject[i].chem+tsubject[i].math+tsubject[i].eng+tsubject[i].computerscience)/500)*100;
                    tstudent[i].grade=getgrade(tstudent[i].marks);
                    printf("******STUDENTS MARKS UPDATED******\n");
                    filesave();
                    goto option2;
                    case 6 :
                    printf("GOING TO MAIN MENU\n");
                    goto option1;
                    
                    default:
                    printf("INVALID INPUT!  RENTER THE OPTION\n");
                    goto option1;
                    }  
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
            for(int i = 0; i < count; i++){
            printf("\n");
            printf("+-------------------------------------------------------------+\n");
            printf("|                    MARKSHEET GENERATED                      |\n");
            printf("+-------------------------------------------------------------+\n");
            printf("|Name : %-28sMarks (%): %f      |\n",tstudent[i].name,tstudent[i].marks);
            printf("|Roll No. : %-24dGrade : %c                 |\n",tstudent[i].rollno,tstudent[i].grade);
            printf("|AGE : %d                                                     |\n",tstudent[i].age);
            printf("+-------------------------------------------------------------+\n");
            printf("+------+------------------------+-----------------+-----------+\n");
            printf("|S no. |        SUBJECT         |MARKS(OUT OF 100)|   GRADE   |\n");
            printf("+------+------------------------+-----------------+-----------+\n");
            printf("|  1.  |PHYSICS                 | %-15f | %-9c |\n",tsubject[i].phy,tsubject[i].gradeP);
            printf("|  2.  |CHEMISTRY               | %-15f | %-9c |\n",tsubject[i].chem,tsubject[i].gradeC);
            printf("|  3.  |MATHEMATICS             | %-15f | %-9c |\n",tsubject[i].math,tsubject[i].gradeM);
            printf("|  4.  |ENGLISH                 | %-15f | %-9c |\n",tsubject[i].eng,tsubject[i].gradeE);
            printf("|  5.  |COMPUTER SCIENCE        | %-15f | %-9c |\n",tsubject[i].computerscience,tsubject[i].gradeCS);
            printf("+------+------------------------+-----------------+-----------+\n");
    }
}
}
    int main(){
        loadfile();
        int option;
        printf("=========================================\n");
        printf("        MARKSHEET GENERATION SYSTEM      \n");
        printf("=========================================\n");
        option:
                printf("CHOOSE FROM THE FOLLOWING OPTION :\n");
                printf("PRESS '1' | FOR ADDING STUDENT DETAILS\n");
                printf("PRESS '2' | FOR DELETING STUDENT DETAILS\n");
                printf("PRESS '3' | FOR SEARCHING STUDENT MARKSHEET\n");
                printf("PRESS '4' | FOR DISPLAYING MARKSHEET OF ALL STUDENTS\n");
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





