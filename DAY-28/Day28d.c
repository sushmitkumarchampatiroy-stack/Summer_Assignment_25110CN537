//Write a program to Create contact management system.
#include<stdio.h>
#include<string.h>
struct contact{
    long number;
    char name[60];
};
struct contact tcontact[100];
int count=0;
//filesave
void filesave(){
    FILE*fp=fopen("contact.dat","wb");
    if(fp==NULL){
    printf("FILE DOES NOT EXIST !");
    return;
    }
    fwrite(&count,sizeof(int),1,fp);
    fwrite(&tcontact,sizeof(struct contact),count,fp);
    printf("*****ALL DATA SAVED SUCCESSFULLY*****");
    fclose(fp);
    return;
}
//loadfile
void fileload(){
    FILE*fp=fopen("contact.dat","rb");
    if(fp==NULL){
    printf("FILE DOES NOT EXIST !");
    return;
    }
    fread(&count,sizeof(int),1,fp);
    fread(&tcontact,sizeof(struct contact),count,fp);
    printf("*****ALL DATA LOADED SUCCESSFULLY*****");
    fclose(fp);
    return;
}
//add contact
void add(){
    struct contact c;
    printf("*****YOU ARE ADDING NEW CONTACT NUMBER*****");
    printf("ENTER THE NAME OF PERSON: ");
    scanf("  %[^\n]",c.name);
    printf("ENTER THE PHONE NO.");
    scanf("%ld", &c.number);
    tcontact[count++]=c;
    printf("*****NEW CONTACT CREATED*****");
    filesave();
    return;
}
//delete contact
void delete(){
    long accno;
    printf("*****YOU ARE DELETING CONTACT NUMBER*****\n");
    printf("ENTER THE PHONE NO. TO BE DELETED : \n");
    scanf("%ld",&accno);
        for(int i=0;i<count;i++){
            if(tcontact[i].number==accno){
                for(int j=i;j<count-1;j++){
                    tcontact[j]=tcontact[j+1];
                }
                count--;
                printf("******PHONE NUMBER DELETED******\n");
                filesave();
                return;
            }
        
    }
    printf("CONTACT NUMBER NOT FOUND!\n");
    filesave();
    return;
}
//update contact
void update(){
        int option1;
        long search;
        printf("******************************************\n");
        printf("YOU ARE UPDATING DETAILS OF CONTACT NUMBER\n");
        printf("******************************************\n");
        printf("ENTER THE CONTACT NO. TO BE UPDATED :\n");
        scanf("%ld",&search);
        for(int i=0;i<count;i++){
            if(tcontact[i].number==search){
                option1:
                printf("CHOOSE FROM OPTION TO UPDATE :\n");
                printf("PRESS '1' | CHANGE NAME\n");
                printf("PRESS '2' | CHANGE CONTACT NO.\n");
                printf("PRESS '3' | GO BACK TO MAIN MENU\n");
                scanf("%d",&option1);
                switch (option1)
                {
                case 1 :
                    printf("YOU ARE UPDATING THE NAME OF ACCOUNT HOLDER:\n");
                    printf("ENTER NEW NAME :\n");
                    scanf(" %[^\n]",tcontact[i].name);
                    printf("******NEW NAME UPDATED******\n");
                    printf("******CONTACT DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 2 :
                    printf("YOU ARE UPDATING THE PHONE NUMBER :\n");
                    printf("ENTER NEW PHONE NUMBER :\n");
                    scanf("%ld",&tcontact[i].number);
                    printf("******NEW PHONE NUMBER UPDATED******\n");
                    printf("******CONTACT DETAILS UPDATED******\n");
                    filesave();
                    goto option1;
                case 3 :
                    printf("GOING TO MAIN MENU\n");
                    return;  
                default:
                    printf("INVALID INPUT!  RENTER THE OPTION\n");
                    goto option1;
                }
                filesave();
            }
        }
        filesave();
        return;
    }
//search contact
void search(){
    long search;
    printf("*****YOU ARE SEARCHING CONTACT DETAILS*****\n");
    printf("ENTER THE PHONE NO. TO BE SEARCHED : \n");
    scanf("%ld",&search);
    for(int i=0;i<count;i++){
        if(tcontact[i].number==search){
            printf("\n");
            printf("+----------------------------------------------+\n");
            printf("|           CONTACT MANAGEMENT SYSTEM          |\n");
            printf("+----+----------------------------+------------+\n");
            printf("| No | Name of Person             | Phone No.  |\n");
            printf("+----+----------------------------+------------+\n");
            printf("| %-2d | %-26s | %-10ld |\n",i + 1,tcontact[i].name,tcontact[i].number);
            printf("+----+----------------------------+------------+\n");

            return;
        }
    }
    printf("CONTACT DOES NOT EXIST ! \n");
    return;
    
}
//display contact
void display(){
    printf("***** DISPLAYING ALL CONTACT DETAILS*****\n");
            printf("\n");
            printf("+----------------------------------------------+\n");
            printf("|           CONTACT MANAGEMENT SYSTEM          |\n");
            printf("+----+----------------------------+------------+\n");
            printf("| No | Name of Person             | Phone No.  |\n");
            printf("+----+----------------------------+------------+\n");
            for(int i=0;i<count;i++){
            printf("| %-2d | %-26s | %-10ld |\n",i + 1,tcontact[i].name,tcontact[i].number);
            }
            printf("+----+----------------------------+------------+\n");
            return;
}
int main(){
    int option1;
    printf("=====================================\n");
    printf("WELCOME TO CONTACT MANAGEMENT SYSTEM \n");
    printf("=====================================\n");
    option1:
    printf("CHOOSE FROM THE FOLLOWING OPTIONS :\n");
    printf("PRESS '1' : FOR ADDING PHONE NUMBER\n");
    printf("PRESS '2' : FOR DELETING PHONE NUMBER\n");
    printf("PRESS '3' : FOR UPDATING PHONE NUMBER\n");
    printf("PRESS '4' : FOR SEARCHING PHONE NUMBER\n");
    printf("PRESS '5' : FOR DISPLAYING PHONE NUMBER\n");
    printf("PRESS '6' : EXIT\n");
    scanf("%d",&option1);
    switch (option1)
    {
    case 1:
        add();
        filesave();
        goto option1;
    case 2:
        delete();
        filesave();
        goto option1;
    case 3:
        update();
        filesave();
        goto option1;
    case 4:
        search();
        filesave();
        goto option1;
    case 5:
        display();
        filesave();
        goto option1;
    case 6:
        printf("YOU ARE EXITING THE BANK SYSTEM \n ");
        filesave();
        return 0;
    default:
    printf("INVALID INPUT! PLEASE RE-ENTER THE OPTION \n");
        goto option1;
    }

}