//Write a program to Create ticket booking system.
#include<stdio.h>
#include<string.h>
struct ticket{
    char trainname[60];
    char start[60];
    char destination[60];
    int ahour;
    int amin;
    int rhour;
    int rmin;
    long trainno;
};
struct ticket book[5]= {
    {"Rajdhani Express", "Delhi", "Mumbai", 14, 30, 6, 0, 12951},
    {"Shatabdi Express", "Delhi", "Chandigarh", 9, 15, 7, 20, 12005},
    {"Duronto Express", "Kolkata", "Mumbai", 21, 45, 19, 50, 12261},
    {"Tejas Express", "Mumbai", "Goa", 11, 0, 8, 30, 22119},
    {"Garib Rath", "Delhi", "Patna", 16, 20, 15, 10, 12203}
};
struct booking {
    char passengername[60];
    long trainno;
    int seatsbooked;
};

struct booking history[100];
int bookingcount = 0;
// Display all available trains
void displayTrains() {
    printf("\n+----------------------------------------------------------------------------------------------+\n");
    printf("|                                    AVAILABLE TRAINS                                            |\n");
    printf("+-----+--------------------+------------+--------------+----------+----------+----------+--------+\n");
    printf("| No. | Train Name         | Train No.  | Start        | Dest.    | Arrival  | Departure| Seats  |\n");
    printf("+-----+--------------------+------------+--------------+----------+----------+----------+--------+\n");
    for (int i = 0; i < MAX; i++) {
        printf("| %-3d | %-18s | %-10ld | %-12s | %-8s | %02d:%02d    | %02d:%02d   | %-6d |\n",
            i + 1, book[i].trainname, book[i].trainno, book[i].start, book[i].destination,
            book[i].ahour, book[i].amin, book[i].rhour, book[i].rmin, book[i].availableseats);
    }
    printf("+-----+--------------------+------------+--------------+----------+----------+----------+--------+\n");
}
//

