#include <math.h>
#include <stdio.h>

int main()
{
    int year, month, day;
    scanf("%d-%d-%d", &year, &month, &day);

    if ((month < 1) || (month > 12)) {
        printf("NO");
    } else if ((month == 1) && ((day < 1) || (day > 31))) {
        printf("NO");
    } else if ((month == 3) && ((day < 1) || (day > 31))) {
        printf("NO");
    } else if ((month == 4) && ((day < 1) || (day > 30))) {
        printf("NO");
    } else if ((month == 5) && ((day < 1) || (day > 31))) {
        printf("NO");
    } else if ((month == 6) && ((day < 1) || (day > 30))) {
        printf("NO");
    } else if ((month == 7) && ((day < 1) || (day > 31))) {
        printf("NO");
    } else if ((month == 8) && ((day < 1) || (day > 31))) {
        printf("NO");
    } else if ((month == 9) && ((day < 1) || (day > 30))) {
        printf("NO");
    } else if ((month == 10) && ((day < 1) || (day > 31))) {
        printf("NO");
    } else if ((month == 11) && ((day < 1) || (day > 30))) {
        printf("NO");
    } else if ((month == 12) && ((day < 1) || (day > 31))) {
        printf("NO");
    } else if (month == 2 && (year % 400 == 0) && (day < 1 || day > 29)) {
        printf("NO");
    } else if (month == 2 && (year % 100 == 0 && year % 400 != 0) && (day < 1 || day > 28)) {
        printf("NO");
    } else if (month == 2 && (year % 4 == 0 && year % 100 != 0) && (day < 1 || day > 29)) {
        printf("NO");
    } else if (month == 2 && (year % 4 != 0 && year % 100 != 0) && (day < 1 || day > 28)) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}