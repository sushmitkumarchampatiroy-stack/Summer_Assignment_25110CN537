//Write a program to Create menu-driven array operations system
#include<stdio.h>
#include <limits.h>
int a[100];
int count;
void display(){
     if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT DISPLAY ARRAY.\n");
        return;
    }
    printf("============================\n");
    printf("YOU ARE DISPLAYING THE ARRAY\n");
    printf("============================\n");
    for(int i=0;i<count;i++){
        printf("%d ",a[i]);
    }
    return;
}
void add(){
    printf("============================\n");
    printf("***YOU ARE ADDING A ARRAY***\n");
    printf("============================\n");
    printf("ENTER THE NO. OF ELEMENT\n");
    scanf("%d",&count);
    printf("ENTER THE ELEMENTS OF ARRAY\n");
    for(int i=0;i<count;i++){
        scanf("%d",&a[i]);
    }
    printf("###NEW ARRAY ADDED###\n");
    display();
}
void adde(){
    int n;
    if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT ADD ELEMENT.\n");
        return;
    }
    printf("===================================\n");
    printf("YOU ARE ADDING A ELEMENT TO A ARRAY\n");
    printf("===================================\n");
    printf("ENTER THE NO. OF ELEMENT TO BE ADDED TO ARRAY :\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS TO BE ADDED TO ARRAY\n");
    for(int i=count;i<count+n;i++){
        scanf("%d",&a[i]);
    }
    count+=n;
    printf("###NEW ELEMENT ADDED TO ARRAY###\n");
    display();

}
void dele(){
    int pos;
    if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT DELETE ELEMENT.\n");
        return;
    }
    printf("=========================================\n");
    printf("YOU ARE DELETING A ELEMENT FROM THE ARRAY\n");
    printf("=========================================\n");
    printf("ENTER THE POSITION OF ELEMENT TO BE DELETED FROM THE ARRAY :\n");
    scanf("%d",&pos);
    for(int i=0;i<count;i++){
        if(i==pos){
            for (int j = i; j < count-1; j++)
            {
                a[j]=a[j+1];
            }
            count--;
        }
    }
    printf("### ELEMENT DELETED FROM ARRAY###\n");
    display();
}
void sorta(){
    if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT SORT ARRAY.\n");
        return;
    }
    printf("=========================\n");
    printf("YOU ARE SORTING THE ARRAY\n");
    printf("=========================\n");
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("*****ARRAY SORTED SUCCESSFULLY*****\n");
    display();
}
void sortd(){
     if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT SORT ARRAY.\n");
        return;
    }
    printf("=========================\n");
    printf("YOU ARE SORTING THE ARRAY\n");
    printf("=========================\n");
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("*****ARRAY SORTED SUCCESSFULLY*****\n");
    display();
}
void search(){
    int n,pos,i,flag;
    flag=0;
     if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT SEARCH ELEMENT.\n");
        return;
    }
    printf("==========================================\n");
    printf("YOU ARE SEARCHING A ELEMENT FROM THE ARRAY\n");
    printf("==========================================\n");
    printf("ENTER THE ELEMENT TO BE SEARCHED:\n");
    scanf("%d",&n);
    for ( i = 0; i < count; i++)
    {
        if (a[i]==n)
        {
            flag++;
            pos=i;
            printf("'%d' is present in array at position %d",n,pos);
            break;
        }
        
    }
    if(flag==0){
        printf("'%d' is not present in array.",n);
    }
    return;  
}
void rev(){
     if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT REVERSE ARRAY.\n");
        return;
    }
    printf("===========================\n");
    printf("YOU ARE REVERSING THE ARRAY\n");
    printf("===========================\n");
    for (int i = 0; i < count / 2; i++) {
        int temp = a[i];
        a[i] = a[count - 1 - i];
        a[count - 1 - i] = temp;
    }
    printf("*****ARRAY REVERSED SUCCESSFULLY*****\n");
    display();
}
void sumandavg(){
    if (count== 0) {
        printf("ARRAY IS EMPTY! CANNOT FIND SUM OR AVERAGE.\n");
        return;
    }
    int sum=0;
    float avg;
    for (int i = 0; i < count; i++)
    {
        sum+=a[i];
    }
    avg=(float)sum/count;
    printf("THE SUM OF ALL ELEMENT IS %d",sum);
    printf("THE AVERAGE OF ALL ELEMENT IS %f",avg);
    return;
}
void findMaxMin() {
    if (count == 0) {
        printf("ARRAY IS EMPTY!\n");
        return;
    }
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < count; i++) {
        if (a[i] > max){
             max = a[i];
        }
        if (a[i] < min){
             min = a[i];
        }
    }
    printf("MAXIMUM = %d, MINIMUM = %d\n", max, min);
    return;
}
int main() {
    int choice;

    printf("==================================\n");
    printf(" MENU DRIVEN ARRAY OPERATIONS SYSTEM \n");
    printf("==================================\n");
    option:
        printf("\nCHOOSE FROM THE FOLLOWING OPTIONS:\n");
        printf("PRESS '1'  : INPUT ARRAY\n");
        printf("PRESS '2'  : DISPLAY ARRAY\n");
        printf("PRESS '3'  : INSERT ELEMENT\n");
        printf("PRESS '4'  : DELETE ELEMENT\n");
        printf("PRESS '5'  : SEARCH ELEMENT\n");
        printf("PRESS '6'  : SORT ARRAY(ASCENDING ORDER)\n");
        printf("PRESS '7'  : SORT ARRAY(DESCENDING ORDER)\n");
        printf("PRESS '8'  : REVERSE ARRAY\n");
        printf("PRESS '9'  : SUM AND AVERAGE\n");
        printf("PRESS '10'  : FIND MAX AND MIN\n");
        printf("PRESS '11' : EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
            add(); 
            goto option;
            case 2: 
            display();
            goto option;
            case 3: 
            adde();
            goto option;
            case 4: 
            dele();
            goto option;
            case 5: 
            search();
            goto option;            
            case 6: 
            sorta();
            goto option;
            case 7: 
            sortd();
            goto option;
            case 8: rev();
            goto option;            
            case 9:
            sumandavg();
            goto option;
            case 10: 
            findMaxMin();
            goto option;
            case 11:
                printf("EXITING PROGRAM. GOODBYE!\n");
                return 0;
            default:
                printf("INVALID CHOICE! PLEASE TRY AGAIN.\n");
                goto option;
        }
    }
