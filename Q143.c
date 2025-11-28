#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, max_index = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[max_index].marks)
            max_index = i;
    }

    printf("\nStudent with Highest Marks:\n");
    printf("Name: %s", s[max_index].name);
    printf("Roll No: %d\n", s[max_index].roll_no);
    printf("Marks: %.2f\n", s[max_index].marks);

    return 0;
}
