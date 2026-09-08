#include<stdio.h>

//define structure for student
struct student {
	int rollno;
	char name[50];
	float marks;
};
//function that takes structure as parameter and print details
void printstudent(struct student){
	printf("\n---student details---\n");
	printf("rollnumber:%d\n",s.rollno);
	printf("name:%s\n",s.name);
	printf("marks:%.2f\n",s.marks);
}
int main(){
	struct student s1;
	
	//input student details
	printf("enter rollnumber:");
	scanf("%d",&s1.rollno);
	
	printf("enter name:");
	scanf("%s",s1.name);
	
	printf("enter marks:");
	scanf("%f",&s1.marks);
	
	//pass structure to function
	printstudent(s1);
	
	return 0;
}
