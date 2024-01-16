#include <stdio.h>
#include <stdlib.h>

// Structure to represent a day
struct Day {
    char *name;
    int date;
    char *activity;
};

// Structure to represent the calendar
struct Calendar {
    struct Day days[7];
};

// Function prototypes
void create(struct Calendar *cal);
void read(struct Calendar *cal);
void display(const struct Calendar *cal);
void freeMemory(struct Calendar *cal);

int main() {
    struct Calendar myCalendar;

    create(&myCalendar);
    read(&myCalendar);
    display(&myCalendar);

    // Free dynamically allocated memory
    freeMemory(&myCalendar);

    return 0;
}

// Function to create the calendar
void create(struct Calendar *cal) {
    for (int i = 0; i < 7; i++) {
        // Dynamically allocate memory for name and activity
        cal->days[i].name = (char *)malloc(20 * sizeof(char));
        cal->days[i].activity = (char *)malloc(50 * sizeof(char));

        // Assume a default day name, date, and activity
        snprintf(cal->days[i].name, 20, "Day %d", i + 1);
        cal->days[i].date = i + 1;
        snprintf(cal->days[i].activity, 50, "Default Activity");
    }
}

// Function to read data from the keyboard
void read(struct Calendar *cal) {
    for (int i = 0; i < 7; i++) {
        printf("Enter details for %s:\n", cal->days[i].name);
        printf("Date: ");
        scanf("%d", &cal->days[i].date);

        printf("Activity: ");
        scanf(" %[^\n]s", cal->days[i].activity);
    }
}

// Function to display the calendar
void display(const struct Calendar *cal) {
    printf("\nWeek's Activity Details Report:\n");
    for (int i = 0; i < 7; i++) {
        printf("%s (Date: %d): %s\n", cal->days[i].name, cal->days[i].date, cal->days[i].activity);
    }
}

// Function to free dynamically allocated memory
void freeMemory(struct Calendar *cal) {
    for (int i = 0; i < 7; i++) {
        free(cal->days[i].name);
        free(cal->days[i].activity);
    }
}




/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct day
{
    char *dayName;
    int d,m,y;
    char *activity_description;
};

void create(struct day *calender)
{
    char *dayNames[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    for(int i = 0;i < 7;i++)
    {
        calender[i].dayName = strdup(dayNames[i]);
        size_t buffersize = 256;
        calender[i].activity_description = (char*)malloc(buffersize * sizeof(char));
    }
}

void read(struct day *calender)
{
    for(int i = 0;i < 7;i++)
    {
        
        printf("Enter date for %s in DD/MM/YYYY: ",calender[i].dayName);
        scanf("%d%d%d", &calender[i].d,&calender[i].m,&calender[i].y);
        printf("Enter activity for %s : ", calender[i].dayName);
        size_t buffersize = 256;
        getline(&calender[i].activity_description,&buffersize,stdin);
        while(getchar() != '\n');
    }
}

void display(struct day *calender)
{
    printf("%-10s%-10s%-10s \n","Day","Date","Activity");
    for(int i = 0;i<7;i++)
    {
        printf("%-10s %d/%d/%d %-10s",calender[i].dayName,calender[i].d,calender[i].m,calender[i].y,calender[i].activity_description);
    }
}

int main(void)
{
    struct day *calender = (struct day*)malloc(7*sizeof(struct day));
    if(calender == NULL)
    {
        fprintf(stderr,"Memory Alloctaion Failed");
        return 1;
    }
    create(calender);
    read(calender);
    display(calender);
    for(int i = 0;i< 7;i++)
    {
        free(calender[i].dayName);
        free(calender[i].activity_description);
    }
    free(calender);
}
*/