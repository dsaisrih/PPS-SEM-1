#include<stdio.h>
int main() {
    //Declaration
    int total_hrs, present_hrs;
    float percent;
    //Input
    printf("Enter the course total hours and student hours present: ");
    scanf("%d %d", &total_hrs, &present_hrs);
    printf("\nTotal Hours: %d\nHours Present: %d\n", total_hrs, present_hrs);
    //Processing
    percent = ((float)present_hrs / total_hrs)*100;
    printf("\nPercent: %f\n", percent);
    //Output
    if (percent < 75) {
        printf("Percentage: %f -Your attendance is less than 75%, Kindly attend the required class", percent);
    } else {printf("Percentage: %f -Your attendance is sufficient- Happy days", percent);}
    return 0;
}