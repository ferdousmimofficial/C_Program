// C Program to Convert the Local Time to GMT

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *local, *gmt;

    time(&t);

    local = localtime(&t);  // local time
    gmt = gmtime(&t);       // GMT / UTC time

    printf("Local Time: %02d-%02d-%d %02d:%02d:%02d\n",
           local->tm_mday, local->tm_mon + 1, local->tm_year + 1900,
           local->tm_hour, local->tm_min, local->tm_sec);

    printf("GMT Time:   %02d-%02d-%d %02d:%02d:%02d\n",
           gmt->tm_mday, gmt->tm_mon + 1, gmt->tm_year + 1900,
           gmt->tm_hour, gmt->tm_min, gmt->tm_sec);

    return 0;
}
