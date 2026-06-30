//Write a program to Create inventory management system.
#include<stdio.h>
struct inventory
{
    int quantity;
    int productid;
    int price;
    char name[60];

};
struct inventory tinventory[100];
int count = 0;

// Saving file
void filesave() {
    FILE *fp = fopen("inventory.dat", "wb");
    if (fp == NULL) {
        printf("ERROR! COULD NOT SAVE FILE.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, fp);
    fwrite(tinventory, sizeof(struct inventory), count, fp);
    fclose(fp);
    printf("*****INVENTORY DATA SAVED SUCCESSFULLY*****\n");
}
//loading file
void fileload() {
    FILE *fp = fopen("inventory.dat", "rb");
    if (fp == NULL) {
        printf("ERROR! COULD NOT SAVE FILE.\n");
        return;
    }
    fread(&count, sizeof(int), 1, fp);
    fread(tinventory, sizeof(struct inventory), count, fp);
    fclose(fp);
    printf("*****INVENTORY DATA LOADED SUCCESSFULLY*****\n");
}
//search id
int searchid(int id){
    for (int i = 0; i < count; i++)
    {
        if(id==tinventory[i].productid){
            return i;
        }
    }
    return -1;
    
}
//add product
void add(){
    struct inventory m;
    int index;
     if (count >= 100) {
        printf("INVENTORY IS FULL! CANNOT ADD MORE ITEMS.\n");
        return;
     }
    printf("======================\n");
    printf("YOU ARE ADDING PRODUCT\n");
    printf("======================\n");
    printf("ENTER THE PRODUCT CODE :\n");
    scanf("%d",&m.productid);
    if(searchid(m.productid)!=-1){
        printf("PRODUCT ALREADY EXISTS !\n");
        printf("TO CHANGE QUANTITY OF PRODUCT ,YOU CAN UPDATE QUANTITY.\n");
        return;
    }
    printf("ENTER THE NAME OF PRODUCT:\n");
    scanf(" %[^\n]",m.name);
    printf("ENTER THE PRODUCT ID:\n");
    scanf("%d",&m.productid);
    do{
    printf("ENTER THE QUANTITY :\n");
    scanf("%d",&m.quantity);
    if(m.quantity<0){
        printf("QUANTITY CAN'T BE NEGATIVE");
    }
    }while (m.quantity<0);
    do{
    printf("ENTER THE PRICE OF EACH PRODUCT:\n");
    scanf("%d",&m.price);
    if(m.price<0){
        printf("PRICE CAN'T BE NEGATIVE");
    }
    }while (m.price<0);
    tinventory[count++]=m;
    filesave();
    return;
}

//delete product
void del(){
    int index,search;
     if (count <=0) {
        printf("INVENTORY IS EMPTY! CANNOT DELETE ANY ITEMS.\n");
        return;
     }
    printf("========================\n");
    printf("YOU ARE DELETING PRODUCT\n");
    printf("========================\n");
    printf("ENTER THE PRODUCT CODE :\n");
    scanf("%d",&search);
    if(searchid(search)==-1){
        printf("PRODUCT DOES NOT  EXISTS !\n");
        return;
    }
    index=searchid(search);
    for(int i=index;i<count-1;i++){
        tinventory[i]=tinventory[i+1];
    }
    count--;
    printf("ITEM DELETED !\n");
    filesave();
    return;
}
//update product
void update(){
    int search,index,option;
    if (count <=0) {
        printf("INVENTORY IS EMPTY! CANNOT UPDATE ANY ITEMS.\n");
        return;
    }
    printf("========================\n");
    printf("YOU ARE UPDATING PRODUCT\n");
    printf("========================\n");
    printf("ENTER THE PRODUCT CODE :\n");
    scanf("%d",&search);
    if(searchid(search)==-1){
        printf("PRODUCT DOES NOT  EXISTS !\n");
        return;
    }
    index=searchid(search);
    option:
    printf("CHOOSE FROM THE FOLLOWING OPTION:\n");
    printf("PRESS '1' | NAME\n");
    printf("PRESS '2' | PRODUCT ID\n");
    printf("PRESS '3' | QUANTITY\n");
    printf("PRESS '4' | PRICE\n");
    printf("PRESS '5' | EXIT\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
    printf("=====================\n");
    printf("YOU ARE UPDATING NAME\n");
    printf("=====================\n");
    printf("ENTER NEW NAME:\n");
    scanf(" %[^\n]",tinventory[index].name);
    filesave();
    goto option;
    case 2:
    printf("===========================\n");
    printf("YOU ARE UPDATING PRODUCT ID\n");
    printf("===========================\n");
    printf("ENTER NEW PRODUCT ID:\n");
    scanf(" %d",&tinventory[index].productid);
    filesave();
    goto option;
    case 3:
    printf("=========================\n");
    printf("YOU ARE UPDATING QUANTITY\n");
    printf("=========================\n");
    printf("ENTER UPDATED QUANTITY:\n");
    scanf(" %d",&tinventory[index].quantity);
    filesave();
    goto option;
    case 4:
    printf("======================\n");
    printf("YOU ARE UPDATING PRICE\n");
    printf("======================\n");
    printf("ENTER NEW PRICE:\n");
    scanf(" %d",&tinventory[index].price);
    filesave();
    goto option;
    case 5:
    printf("==========================\n");
    printf("YOU ARE GOING TO MAIN MENU\n");
    printf("==========================\n");
    return;
    default:
    printf("INVALID INPUT! RE-ENTER THE OPTION\n");
    goto option;
    }
    filesave();
}
//search product
void search(){
    int search,index;
    if (count <=0) {
        printf("INVENTORY IS EMPTY! CANNOT SEARCH ANY ITEMS.\n");
        return;
    }
    printf("=========================\n");
    printf("YOU ARE SEARCHING PRODUCT\n");
    printf("=========================\n");
    printf("ENTER THE PRODUCT CODE :\n");
    scanf("%d",&search);
    if(searchid(search)==-1){
        printf("PRODUCT DOES NOT  EXISTS !\n");
        return;
    }
    index=searchid(search);
    printf("\n+-----+----------------------------+----------+----------+----------------+\n");
    printf("| ID  | Name                       | Quantity | Price    | Total Value    |\n");
    printf("+-----+----------------------------+----------+----------+----------------+\n");
    printf("| %-3d | %-26s | %-8d | %-8d | %-14d |\n",
        tinventory[index].productid, tinventory[index].name, tinventory[index].quantity,
        tinventory[index].price, tinventory[index].quantity * tinventory[index].price);
    printf("+-----+----------------------------+----------+----------+----------------+\n");
    return;
}
//display product
void display(){
     if (count <=0) {
        printf("INVENTORY IS EMPTY! CANNOT SEARCH ANY ITEMS.\n");
        return;
    }
    printf("==========================\n");
    printf("DISPLAYING ALL THE PRODUCT\n");
    printf("==========================\n");
    printf("\n+-----+----------------------------+----------+----------+----------------+\n");
    printf("| ID  | Name                       | Quantity | Price    | Total Value    |\n");
    printf("+-----+----------------------------+----------+----------+----------------+\n");
    for(int i=0;i<count;i++){
    printf("| %-3d | %-26s | %-8d | %-8d | %-14d |\n",
        tinventory[i].productid, tinventory[i].name, tinventory[i].quantity,
        tinventory[i].price, tinventory[i].quantity * tinventory[i].price);
    printf("+-----+----------------------------+----------+----------+----------------+\n");
    }
    return;
}
int main() {
    fileload();
    int choice;

    printf("========================================\n");
    printf(" WELCOME TO INVENTORY MANAGEMENT SYSTEM \n");
    printf("========================================\n");
    option1:
        printf("\nCHOOSE FROM THE FOLLOWING OPTIONS:\n");
        printf("PRESS '1' : ADD ITEM\n");
        printf("PRESS '2' : DELETE ITEM\n");
        printf("PRESS '3' : UPDATE ITEM\n");
        printf("PRESS '4' : SEARCH ITEM\n");
        printf("PRESS '5' : DISPLAY ALL ITEMS\n");
        printf("PRESS '6' : EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add();
                goto option1;
            case 2:
                del();
                goto option1;
            case 3:
                update();
                goto option1;
            case 4:
                search();
                goto option1;
            case 5:
                display();
                goto option1;
            case 6:
                printf("YOU ARE EXITING INVENTORY MANAGEMENT SYSTEM.\n");
                filesave();
                return 0;
            default:
                printf("INVALID CHOICE! PLEASE TRY AGAIN.\n");
                goto option1;
        }
}


