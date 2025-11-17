// C Program to Display Dates of Calendar Year in Different Formats

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    int day = tm_info->tm_mday;
    int month = tm_info->tm_mon + 1; // months 0-11
    int year = tm_info->tm_year + 1900;

    printf("Date in DD-MM-YYYY format: %02d-%02d-%d\n", day, month, year);
    printf("Date in MM/DD/YYYY format: %02d/%02d/%d\n", month, day, year);
    printf("Date in YYYY.MM.DD format: %d.%02d.%02d\n", year, month, day);

    return 0;
}
