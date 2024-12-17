#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int sub[5];
    int sno;
};

int main() {
    struct student stu[10];
    int i, n, j;

    printf("Enter the total number of students: ");
    scanf("%d", &n);

    printf("Enter the details:\n");

    for (j = 0; j < n; j++) {
        // Input name
        printf("Enter the name: ");
        scanf(" %[^\n]", stu[j].name); // Use " %[] to include spaces and handle buffer issues

        // Input student number
        printf("Enter the roll number: ");
        scanf("%d", &stu[j].sno);

        // Input subject marks
        printf("Enter the marks for 5 subjects: ");
        for (i = 0; i < 5; i++) {
            scanf("%d", &stu[j].sub[i]);
        }
    }

    // Display all students' details
    printf("\n--- Student Details ---\n");
    for (j = 0; j < n; j++) {
        printf("\nStudent %d:\n", j + 1);
        printf("Name: %s\n", stu[j].name);
        printf("Roll Number: %d\n", stu[j].sno);
        printf("Marks: ");
        for (i = 0; i < 5; i++) {
            printf("%d ", stu[j].sub[i]);
        }
        printf("\n");
    }

    return 0;
}