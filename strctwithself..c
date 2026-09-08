#include<stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a self-referential structure for student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
    struct Student* next;   // Pointer to the next student (self-referential)
};

int main() {
    // Create first student dynamically
    struct Student* s1 = (struct Student*)malloc(sizeof(struct Student));
    s1->rollNo = 101;
    strcpy(s1->name, "DATA");
    s1->marks = 85.5;

    // Create second student dynamically
    struct Student* s2 = (struct Student*)malloc(sizeof(struct Student));
    s2->rollNo = 102;
    strcpy(s2->name, "SCIENCE");
    s2->marks = 90.0;
    
    //link them together 
    s1->next=s2;
    s2->next=NULL;  //end of list
    
    //traverse and print student details 
    struct student*temp=s1;
    while (temp !=NULL){
    	printf("RollNo:%d\n",temp->rollno);
    	printf("name:%s\n",temp->name);
    	printf("Marks  : %.2f\n\n", temp->marks);
        temp = temp->next;
  }
    // Free memory
    free(s1);
    free(s2);

    return 0;
	}

