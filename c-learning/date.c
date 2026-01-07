#include <stdio.h>

typedef struct Date
{
    int year;
    int month;
    int day;
} Date;

int checkDate(Date date);

int main() {
    Date date;
    do{
        printf("Enter date (YYYY MM DD): ");
        scanf("%d %d %d", &date.year, &date.month, &date.day);
    }while(!checkDate(date));
    printf("Valid Date: %04d-%02d-%02d\n", date.year, date.month, date.day);
    return 0;
}

int checkDate(Date date) {
    if (date.year < 0 )  return 0;
    if (date.month < 1 || date.month > 12) return 0;
    int daysInMonth;
    switch (date.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)) ? 29 : 28;
            break;
    }
    if (date.day < 1 || date.day > daysInMonth) return 0;
    return 1;
}