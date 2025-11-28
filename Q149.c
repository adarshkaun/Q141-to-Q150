#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));

    printf("Enter name: ");
    fgets(s->name, sizeof(s->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s", s->name);
    printf("Roll: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    free(s);

    return 0;
}
