#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join_date;
};

int main() {
    struct Employee e;

    printf("Enter name: ");
    fgets(e.name, sizeof(e.name), stdin);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter joining day: ");
    scanf("%d", &e.join_date.day);

    printf("Enter joining month: ");
    scanf("%d", &e.join_date.month);

    printf("Enter joining year: ");
    scanf("%d", &e.join_date.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.join_date.day,
           e.join_date.month,
           e.join_date.year);

    return 0;
}
