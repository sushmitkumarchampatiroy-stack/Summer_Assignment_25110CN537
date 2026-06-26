//Write a program to Create voting eligibility system.
#include<stdio.h>
char *age(int year){
    if(year>=18)
    return "YES";
    else
    return "NO";
}
char *citizen(int r){
    if(r==0)
    return "NO";
    if(r==1)
    return "YES";
}
int main(){
    int a,b,c,d;
    printf("ENTER YOUR AGE : \n");
    scanf("%d",&a);
   citizen:
    printf("DECLARE YOUR CITIZENSHIP :\n");
    printf("PRESS '1' IF 'YES' \n");
    printf("PRESS '0' IF 'NO' \n");
    scanf("%d",&b);
    if(b!=0 && b!=1){
        printf("INVALID INPUT \n");
        printf("ENTER YOU REPLY AGAIN. ACCORDING TO GIVEN OPTION");
        goto citizen ;
    }
    electoral:
    printf("DECLARE IF YOU ARE REGISTERED ON ELECTORAL ROLL :\n");
    printf("PRESS '1' IF 'YES' \n");
    printf("PRESS '0' IF 'NO' \n");
    scanf("%d",&c);
    if(c!=0 && c!=1){
        printf("INVALID INPUT \n");
        printf("ENTER YOU REPLY AGAIN. ACCORDING TO GIVEN OPTION");
        goto electoral ;
    }
    ban:
    printf("DECLARE IF YOU ARE BANNED FROM VOTING OR NOT :\n");
    printf("PRESS '1' IF 'YES' \n");
    printf("PRESS '0' IF 'NO' \n");
    scanf("%d",&d);
    if(d!=0 && d!=1){
        printf("INVALID INPUT \n");
        printf("ENTER YOU REPLY AGAIN. ACCORDING TO GIVEN OPTION");
        goto ban ;
    }

    printf("AGE ALLOWED FOR VOTING : %s \n",age(a));
    printf("BASED ON YOUR CITIZENSHIP, ARE YOU ELIGIBLE FOR VOTING : %s \n",citizen(b));
    printf("BASED ON YOUR NAME ON ELECTORAL ROLL, ARE YOU ELIGIBLE FOR COTING : %s \n",citizen(c));
    printf("ARE YOU BANNED FROM VOTING : %s \n",citizen(d));
    if(a>=18&&b==1&&c==1&&d==0){
        printf("*****YOU ARE ELIGIBLE FOR VOTING*****");
    }
    else{
        printf("*****YOU ARE NOT ELIGIBLE FOR VOTING.*****");
    }
    return 0;

}
