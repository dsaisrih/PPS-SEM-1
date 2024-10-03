//THIS CODE HAVE ERROR AND WE HAVE TO FIND ERROR IN THIS AND THE CORRECTED CODE IS ATTENDANCE_2.C
#include<stdio.h>
int main() {
    //Declaration
    int total_hrs, present_hrs, percent;
    //Input
    printf("Enter the course total hours and student hours present: ");
    scanf("%d %d", &total_hrs, &present_hrs);
    printf("\nTotal Hours: %d\nHours Present: %d\n", total_hrs, present_hrs);
    //Processing
    percent = (present_hrs / total_hrs)*100;
    printf("\nPercent: %d\n", percent);
    //Output
    if (percent < 75) {
        printf("Percentage: %d -Your attendance is less than 75%, Kindly attend the required class", percent);
    } else {printf("Percentage: %d -Your attendance is sufficient- Happy days", percent);}
    return 0;
}