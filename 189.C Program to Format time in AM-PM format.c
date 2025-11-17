// C Program to Format time in AM-PM format

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *tm_info;

    time(&t);                 // get current time
    tm_info = localtime(&t);  // convert to local time

    int hour = tm_info->tm_hour;
    int minute = tm_info->tm_min;
    int second = tm_info->tm_sec;
    char *ampm = (hour >= 12) ? "PM" : "AM";

    if(hour == 0) hour = 12;       // midnight
    else if(hour > 12) hour -= 12; // convert 24-hour to 12-hour format

    printf("Current time: %02d:%02d:%02d %s\n", hour, minute, second, ampm);
    return 0;
}
