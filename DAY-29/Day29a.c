//Write a program to Create menu-driven calculator.
#include<stdio.h>
int main(){
    float a,b,c;
    int option;
    printf("+--------------------------------------+\n");
    printf("|             CALCULATOR               |\n");
    printf("+--------------------------------------+\n");
    option:
    printf("| Choose From the following operation: |\n");
    printf("+--------------------------------------+\n");
    printf("| Press '1' : Addition                 |\n");
    printf("| Press '2' : Substraction             |\n");
    printf("| Press '3' : Multiplication           |\n");
    printf("| Press '4' : Divison                  |\n");
    printf("| Press '5' : Modulus(Remainder)(int)  |\n");
    printf("| Press '6' : Exit                     |\n");
    printf("+--------------------------------------+\n");
    printf("| Enter choice:                        |\n");
    printf("  -> ");scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("+--------------------------------------+\n");
        printf("  Enter First Number : ");scanf("%f",&a);
        printf("  Enter Second Number : ");scanf("%f",&b);
        c=a+b;
        printf("+--------------------------------------+\n");
        printf("| Sum Of The Numbers : %-15f |\n",c);
        printf("+--------------------------------------+\n");
        goto option;
    case 2:
        printf("+--------------------------------------+\n");
        printf("  Enter First Number : ");scanf("%f",&a);
        printf("  Enter Second Number : ");scanf("%f",&b);
        c=a-b;
        printf("+--------------------------------------+\n");
        printf("| Diffrence Of The Numbers : %-15f |\n",c);
        printf("+--------------------------------------+\n");
        goto option;
    case 3:
        printf("+--------------------------------------+\n");
        printf("  Enter First Number : ");scanf("%f",&a);
        printf("  Enter Second Number : ");scanf("%f",&b);
        c=a*b;
        printf("+--------------------------------------+\n");
        printf("| Product Of The Numbers : %-15f |\n",c);
        printf("+--------------------------------------+\n");
        goto option;
    case 4:
        printf("+--------------------------------------+\n");
        printf("  Enter First Number : ");scanf("%f",&a);
        printf("  Enter Second Number : ");scanf("%f",&b);
        c=a/b;
        printf("+--------------------------------------+\n");
        printf("| Quotient Of The Numbers : %-15f |\n",c);
        printf("+--------------------------------------+\n");
        goto option;
    case 5:
        printf("+--------------------------------------+\n");
        printf("  Enter First Number : ");scanf("%f",&a);
        printf("  Enter Second Number : ");scanf("%f",&b);
        c= (int)a % (int)b;
        printf("+--------------------------------------+\n");
        printf("| Remainder Of The Numbers : %-15d |\n",c);
        printf("+--------------------------------------+\n");
        goto option;
    case 6:
       printf("+--------------------------------------+\n");
       printf("|    You Are Exiting The Calculator    |\n");
       printf("+--------------------------------------+\n");
       return 0;
    default:
       printf("+--------------------------------------+\n");
       printf("|          Invalid Input !             |\n");
       printf("+--------------------------------------+\n");
       goto option;
    }
}
