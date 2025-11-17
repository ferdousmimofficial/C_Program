// C program to Print Digital Clock with the Current Time

#include <stdio.h>
#include <time.h>
#include <unistd.h> // for sleep()

int main() {
    while(1) {
        time_t t;
        struct tm *tm_info;

        time(&t);
        tm_info = localtime(&t);

        int hour = tm_info->tm_hour;
        int minute = tm_info->tm_min;
        int second = tm_info->tm_sec;
        char *ampm = (hour >= 12) ? "PM" : "AM";

        if(hour == 0) hour = 12;
        else if(hour > 12) hour -= 12;

        printf("\r%02d:%02d:%02d %s", hour, minute, second, ampm);
        fflush(stdout); // flush output buffer

        sleep(1); // wait 1 second
    }
    return 0;
}
