#include <stdio.h>
#include <time.h>

int main() {

    time_t raw_time;
    struct tm *current_info;

    // Get the current time
    time(&raw_time);

    // Convert to local time format
    current_info = localtime(&raw_time);

    // Print the formatted date and time
    printf("Current date and time: %s", asctime(current_info));

    return 0;
}
