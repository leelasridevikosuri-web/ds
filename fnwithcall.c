#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int age;
    float marks;
};

// Function that takes structure as argument (call by value)
void displayStudent(struct Student s) {
    printf("Student Details:\n");
    printf("Name  : %s\n", s.name);
    printf("Age   : %d\n", s.age);
    printf("Marks : %.2f\n", s.marks);
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

    // Function call (call by value)
    displayStudent(stu);

    return 0;
}


// Key Points
//struct Student` holds **name, age, marks**.  
//displayStudent()` takes the structure **by value** (a copy is passed).  
//Any changes inside `displayStudent()`xerox  won’t affect the original `stu orignal one` in `main()`.  


