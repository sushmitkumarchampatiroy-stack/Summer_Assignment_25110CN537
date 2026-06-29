//Write a program to Create library management system.
#include <stdio.h>
#include<string.h>
#define MAX 100
struct books
{
    char name[50];
    double isbn;
    char author[50];
    int quantity;

};
struct member
{
    char name[50];
    double contact;
    int id;
};
struct gt
{
    int issueday;
    int issuemonth;
    int issueyear;
    int returnday;
    int returnmonth;
    int returnyear;
    int dueday;
    int duemonth;
    int dueyear;
    double bookissue;
    int issueid;
    char issuename[60];
    char bookname[60];
};
struct books tbooks[MAX];
struct member tmember[MAX];
struct gt tgt[MAX];
int count=0;
int mcount=0;
int icount=0;
//SAVING DATA TO A FILE
void filesave(){
    FILE*fp=fopen("library.dat","wb");
    if(fp==NULL){
    printf("FILE DOES NOT EXIST !");
    return;
    }
    fwrite(&count,sizeof(int),1,fp);
    fwrite(&mcount,sizeof(int),1,fp);
    fwrite(&icount,sizeof(int),1,fp);
    fwrite(&tbooks,sizeof(struct books),count,fp);
    fwrite(&tmember,sizeof(struct member),mcount,fp);
    fwrite(&tgt,sizeof(struct gt),icount,fp);
    fclose(fp);
    printf("CHANGES SAVED SUCCESSFULLY !\n");
}
//LOADING DATA TO A FILE
void loadfile(){
    FILE*fp=fopen("library.dat","rb");
    if(fp==NULL){
    printf("NO PREVIOUS DATA EXISTS !");
    return;
    }
    fread(&count,sizeof(count),1,fp);
    fread(&mcount,sizeof(mcount),1,fp);
    fread(&icount,sizeof(icount),1,fp);
    fread(&tbooks,sizeof(struct books),count,fp);
    fread(&tmember,sizeof(struct member),mcount,fp);
    fread(&tgt,sizeof(struct gt),icount,fp);
    fclose(fp);
    printf("ALL PREVIOUS DATA LOADED SUCCESSFULLY !\n");
}
//INPUT DETAILS OF BOOKS
//ADDING BOOK 
void addbook(){
    printf("*****YOU ARE ADDING NEW BOOKS*****\n");
    struct books b;
    printf("ENTER THE TITLE OF BOOK\n");
    scanf("%s",&b.name);
    printf("ENTER THE NAME OF AUTHOR OF BOOK\n");
    scanf("%s",&b.author);
    printf("ENTER THE ISBN CODE OF BOOK \n");
    scanf("%lf",&b.isbn);
    for(int i = 0; i < count; i++){
        if(b.isbn == tbooks[i].isbn){
            tbooks[i].quantity++;
            printf("BOOK ALREADY EXISTS! QUANTITY UPDATED TO %d\n",
                    tbooks[i].quantity);
            filesave();
            return;      
        }
    }

    // STEP 2: Book is new, ask quantity and add it
    printf("ENTER QUANTITY : ");
    scanf("%d", &b.quantity);
    tbooks[count++] = b;     
    printf("*****NEW BOOK ADDED*****\n");
    filesave();

}
//DELETING BOOK
void deletebook(){
    double isbnd;
    printf("*****YOU ARE DELETING BOOK*****\n");
    printf("ENTER THE ISBN CODE OF BOOK TO BE DELETED : \n");
    scanf("%lf",&isbnd);
    for(int i=0;i<count;i++){
        if(tbooks[i].isbn==isbnd){
            if(tbooks[i].quantity>1){
                tbooks[i].quantity--;
                return;
            }
            else if (tbooks[i].quantity==1)
            {
                for(int j=i;j<count-1;j++){
                    tbooks[j]=tbooks[j+1];
                }
                count--;
                printf("*****BOOK DELETED*****\n");
                filesave();
                return;
            }
        }
    }
    printf("BOOK DOES NOT EXIST ! \n");
    filesave();
    return;
}
//SEARCHING BOOK
void search(){
    double isbnS;
    printf("*****YOU ARE SEARCHING BOOK*****\n");
    printf("ENTER THE ISBN CODE OF BOOK TO BE SEARCHED : \n");
    scanf("%lf",&isbnS);
    for(int i=0;i<count;i++){
        if(tbooks[i].isbn==isbnS){
            printf("\n");
            printf("+-----------------------------------------------------------------------------------+\n");
            printf("|                                LIBRARY MANAGEMENT SYSTEM                          |\n");
            printf("+----+----------------------------+------------+-------------------------+----------+\n");
            printf("| No | Name of Book               | ISBN       | Author's Name           | Quantity |\n");
            printf("+----+----------------------------+------------+-------------------------+----------+\n");
            printf("| %-2d | %-26s | %-10lf| %-24s | %-8d |\n",i + 1,tbooks[i].name,tbooks[i].isbn,tbooks[i].author,tbooks[i].quantity);
        }
           printf("+----+----------------------------+------------+-------------------------+----------+\n");
        return;

        }
    
    printf("BOOK DOES NOT EXIST ! \n");
    return;
    
}
//DISPLAYING BOOK
void display(){
    printf("*****DISPLAYING ALL BOOKS*****\n");
    
            printf("\n");
            printf("+-----------------------------------------------------------------------------------+\n");
            printf("|                                LIBRARY MANAGEMENT SYSTEM                          |\n");
            printf("+----+----------------------------+------------+-------------------------+----------+\n");
            printf("| No | Name of Book               | ISBN       | Author's Name           | Quantity |\n");
            printf("+----+----------------------------+------------+-------------------------+----------+\n");
            for(int i=0;i<count;i++){
            printf("| %-2d | %-26s | %-10lf | %-23s | %-8d |\n",i + 1,tbooks[i].name,tbooks[i].isbn,tbooks[i].author,tbooks[i].quantity);
            printf("+----+----------------------------+------------+-------------------------+----------+\n");
        }
    return;
}
//INPUT DETAILS OF MEMBERS
//ADDING MEMBER
void addmember(){
        printf("********************************\n");
        printf("YOU ARE ADDING MEMBER  DETAILS :\n");
        printf("********************************\n");
        struct member m;
        printf("ENTER NAME OF MEMBER :\n");
        scanf("%[^\n]",m.name);
        int duplicate;
        do {
        printf("ENTER THE IDENTIFICATION CODE OF MEMBER :\n");
        scanf("%d", &m.id);

        duplicate = 0; 

        for (int i = 0; i <mcount; i++) {
            if (m.id == tmember[i].id) {
                duplicate = 1; 
                printf("IDENTIFICATION CODE ALREADY EXISTS!\n");
                printf("PLEASE RE-ENTER THE IDENTIFICATION CODE\n");
                break;
            }
        }
        } while (duplicate == 1);
        printf("ENTER THE CONTACT NO. OF MEMBER :\n");
        scanf("%lf",&m.contact);
        tmember[mcount++]=m;
        printf("*****NEW MEMBER ADDED*****\n");
        filesave();
        return;
    }
//DELETING MEMBER
 void delmember(){
        int search;
        printf("**********************************\n");
        printf("YOU ARE DELETING DETAILS OF MEMBER\n");
        printf("**********************************\n");
        printf("ENTER THE IDENTIFICATION CODE OF MEMBER :");
        scanf("%d",&search);
        
        for(int i=0;i<mcount;i++){
            if(tmember[i].id==search){
                for(int j=i;j<mcount-1;j++){
                    tmember[j]=tmember[j+1];
                }
                mcount--;
                printf("******MEMBER DETAILS DELETED******\n");
                filesave();
                return;
            }
        }
        printf("MEMBER NOT FOUND!\n");
    }
//FOR SEARCHING MEMBER
void msearch(){
        int search;
        printf("***********************************\n");
        printf("YOU ARE SEARCHING DETAILS OF MEMBER\n");
        printf("***********************************\n");
        printf("ENTER THE IDENTIFICATION CODE OF STUDENT :\n");
        scanf("%d",&search);
        for(int i=0;i<mcount;i++){
            if(tmember[i].id==search){
                printf("\n");
            printf("+------------------------------------------------------------+\n");
            printf("|                 LIBRARY MANAGEMENT SYSTEM                  |\n");
            printf("+----+----------------------------+------------+-------------+\n");
            printf("| No | Name of Member             | ID CODE    | Contact no. |\n");
            printf("+----+----------------------------+------------+-------------+\n");
            printf("| %-2d | %-24s | %-11d | %-12lf |\n",i + 1,tmember[i].name,tmember[i].id,tmember[i].contact);
            printf("+----+----------------------------+------------+-------------+\n");
                return;
            }
        }
        printf("MEMBER NOT FOUND!\n");
        return;
    }
//DISPLAYING ALL MEMBER
void mdisplay(){
        printf("***********************************\n");
        printf("   DISPLAYING DETAILS OF MEMBER    \n");
        printf("***********************************\n");
        for(int i=0;i<mcount;i++){
                printf("\n");
            printf("+------------------------------------------------------------+\n");
            printf("|                 LIBRARY MANAGEMENT SYSTEM                  |\n");
            printf("+----+----------------------------+------------+-------------+\n");
            printf("| No | Name of Member             | ID CODE    | Contact no. |\n");
            printf("+----+----------------------------+------------+-------------+\n");
            printf("| %-2d | %-24s | %-11d | %-12lf |\n",i + 1,tmember[i].name,tmember[i].id,tmember[i].contact);
            printf("+----+----------------------------+------------+-------------+\n");
            }
        return;
}
//BOOK RETURN OR ISSUE
// ISSUE BOOK
void issue(){
    int mfound=-1;
    int mid;
    int bfound=-1;
    double bid;
    printf("*****YOU ARE ISSUING BOOK*****\n");
    struct gt s;
    do{
    printf("ENTER THE IDENTIFICATION CODE OF MEMBER :\n");
    scanf("%d",&mid);
    for(int i=0;i<mcount;i++){
        if(mid==tmember[i].id){
            mfound=i;
            s.issueid=tmember[i].id;
            break;
        }
    }
    if(mfound==-1){
        printf("MEMBER DOES NOT EXIST\n");
        printf("RENTER THE MEMBER ID \n");
    }
    }while (mfound==-1);
    do{
    printf("ENTER THE ISBN OF BOOK :\n");
    scanf("%lf",&bid);
    for(int i=0;i<count;i++){
        if(bid==tbooks[i].isbn){
            bfound=i;
            s.bookissue=tbooks[i].isbn;
            break;
        }
    }
    if(bfound==-1){
        printf("MEMBER DOES NOT EXIST\n");
        printf("RENTER THE MEMBER ID \n");
    }
    }while (bfound==-1);
    strcpy(s.issuename, tmember[mfound].name);
    strcpy(s.bookname, tbooks[bfound].name);
    printf("ENTER THE ISSUNG DATE : \n");
    scanf("%d %d %d",&s.issueday,&s.issuemonth,&s.issueyear);
    printf("ENTER THE DUE DATE : \n");
    scanf("%d %d %d",&s.dueday,&s.duemonth,&s.dueyear);
    tgt[icount++]=s;
    printf("*****BOOK ISSUED*****\n");
    filesave();
    return;
}
// RETURN BOOK
void r(){
    printf("*****RETURNING BOOK*****\n");
    int mid; double bid;
    printf("ENTER MEMBER ID : ");
    scanf("%d", &mid);
    printf("ENTER BOOK ISBN : ");
    scanf("%lf", &bid);

    int actualday, actualmonth, actualyear;
    printf("ENTER ACTUAL RETURN DATE (DD MM YYYY) : ");
    scanf("%d %d %d", &actualday, &actualmonth, &actualyear);

    for (int i = 0; i < icount; i++) {
        if (tgt[i].issueid == mid &&
            tgt[i].bookissue == bid ) {
            tgt[i].returnday   = actualday;
            tgt[i].returnmonth = actualmonth;
            tgt[i].returnyear  = actualyear;
            }

            printf("*****BOOK RETURNED SUCCESSFULLY*****\n");
            printf("Book        : %s\n", tgt[i].bookname);
            printf("Member      : %s\n", tgt[i].issuename);
            filesave();
            return;
        }
        printf("NO MATCHING RECORD FOUND!\n");
    }
//DISPLAY OF MEMBER WHO ISSUED BOOK
void displayissued() {
    if (icount == 0) { printf("NO RECORDS FOUND!\n"); return; }
    printf("+--------+---------------------------+------------------+------------+------------+----------+\n");
    printf("| MEM ID | MEMBER NAME               | BOOK ISBN        | ISSUE DATE | DUE DATE   | RET DATE |\n");
    printf("+--------+---------------------------+------------------+------------+------------+----------+\n");
    for (int i = 0; i < icount; i++) {
        printf("| %-6d | %-25s | %-16.0lf | %02d/%02d/%04d | %02d/%02d/%04d | %02d/%02d/%02d |\n",
            tgt[i].issueid, tgt[i].issuename, tgt[i].bookissue,
            tgt[i].issueday,  tgt[i].issuemonth,  tgt[i].issueyear,
            tgt[i].dueday,    tgt[i].duemonth,    tgt[i].dueyear,
            tgt[i].returnday, tgt[i].returnmonth, tgt[i].returnyear);
    }
    printf("+--------+---------------------------+------------------+------------+------------+----------+\n");
}
int main(){
    loadfile();
    int option,option1,option2;
    printf("=========================================\n");
    printf("      LIBRARY MANAGEMENT SYSTEM\n          ");
    printf("=========================================\n");
    option:
    printf("PRESS '1'| BOOK MANAGEMENT\n");
    printf("PRESS '2'| MEMBER MANAGEMENT\n");
    printf("PRESS '3'| ISSUE BOOK\n");
    printf("PRESS '4'| RETURN BOOK\n");
    printf("PRESS '5'| VIEW ALL ISSUED RECORDS\n");
    printf("PRESS '6'| EXIT\n");
    printf("CHOOSE DESIRED OPTION :\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
    option1:
    printf("=========================================\n");
    printf("               BOOK MANAGEMENT           \n");
    printf("=========================================\n");
    printf("PRESS '1'| ADD BOOK\n");
    printf("PRESS '2'| DELETE BOOK\n");
    printf("PRESS '3'| SEARCH BOOK\n");
    printf("PRESS '4'| DISPLAY ALL  BOOK\n");
    printf("PRESS '5'| GO TO PREVIOUS MENU\n");
    printf("CHOOSE DESIRED OPTION :\n");
    scanf("%d",&option1);
    switch (option1)
    {
    case 1:
        addbook();
        filesave();
        goto option1;
    case 2:
        deletebook();
        filesave();
        goto option1;
    case 3:
        search();
        filesave();
        goto option1;
    case 4:
        display();
        filesave();
        goto option1;
    case 5:
        goto option;
    default:
        printf("INVALID INPUT ! RE-ENTER THE CHOICE\n");
        goto option1;
    }
    case 2:
    option2:
    printf("=========================================\n");
    printf("             MEMBER MANAGEMENT           \n");
    printf("=========================================\n");
    printf("PRESS '1'| ADD MEMBER\n");
    printf("PRESS '2'| DELETE MEMBER\n");
    printf("PRESS '3'| SEARCH MEMBER\n");
    printf("PRESS '4'| DISPLAY ALL MEMBER\n");
    printf("PRESS '5'| GO TO PREVIOUS MENU\n");
    printf("CHOOSE DESIRED OPTION :\n");
    scanf("%d",&option2);
    switch (option2)
    {
    case 1:
        addmember();
        filesave();
        goto option2;
    case 2:
        delmember();
        filesave();
        goto option2;
    case 3:
        msearch();
        filesave();
        goto option2;
    case 4:
        mdisplay();
        filesave();
        goto option2;
    case 5:
        goto option;
    default:
        printf("INVALID INPUT ! RE-ENTER THE CHOICE\n");
        goto option2;
    }

    case 3:
        issue();
        filesave();
        goto option;
    case 4:
        r();
        filesave();
        goto option;
    case 5:
        displayissued();
        filesave();
        goto option;
    case 6:
        printf("YOU EXITING LIABRARY MANAGEMENT SYSTEM\n");
        return 0;
    default:
        printf("INVALID INPUT ! RE-ENTER THE CHOICE\n");
        goto option;
    }

}