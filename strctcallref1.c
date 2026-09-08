#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int age;
    float marks;
};

// Function that takes structure address (pointer)
void displayStudent(struct Student *s) {
    printf("Student Details:\n");
    printf("Name  : %s\n", s->name);
    printf("Age   : %d\n", s->age);
    printf("Marks : %.2f\n", s->marks);

    // Example modification
    s->marks += 5;  // Add bonus marks
    printf("\nAfter adding bonus:\n");
    printf("Marks : %.2f\n", s->marks);
}

int main() {
    struct Student stu;

    // Input student details
    printf("Enter name: ");
    scanf("%s", stu.name);

    printf("Enter age: ");
    scanf("%d", &stu.age);

    printf("Enter marks: ");
    scanf("%f", &stu.marks);

    // Function call (passing address of structure)
    displayStudent(&stu);

    // Show that changes persist in main
    printf("\nFinal Marks in main: %.2f\n", stu.marks);

    return 0;
}

