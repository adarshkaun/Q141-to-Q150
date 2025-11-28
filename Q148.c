#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter first student's name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter first student's roll: ");
    scanf("%d", &s1.roll);
    printf("Enter first student's marks: ");
    scanf("%f", &s1.marks);
    getchar();

    printf("\nEnter second student's name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    printf("Enter second student's roll: ");
    scanf("%d", &s2.roll);
    printf("Enter second student's marks: ");
    scanf("%f", &s2.marks);

    if(strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll && s1.marks == s2.marks)
        printf("\nBoth structures are identical.\n");
    else
        printf("\nStructures are not identical.\n");

    return 0;
}
