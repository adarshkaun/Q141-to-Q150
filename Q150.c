#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nModified Data:\n");
    printf("Name: %s", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
