#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter name: ");
    fgets(e1.name, sizeof(e1.name), stdin);

    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    fp = fopen("employee.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("\nData Read From File:\n");
    printf("Name: %s", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
