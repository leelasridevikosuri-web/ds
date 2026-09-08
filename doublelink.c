#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*prev;
	struct node*next;
};
struct node*head;
void display(){
	struct node*temp=head;
	while(temp!=NULL)
	{
		printf("%d-->%d\n",temp->data,temp->next);
		temp=temp->next;
	}
}
void create_list(){
	struct node*n1,*n2,*n3,*n4;
	n1=(struct node*)malloc(sizeof(struct node));
	n2=(struct node*)malloc(sizeof(struct node));
	n3=(struct node*)malloc(sizeof(struct node));
	n4=(struct node*)malloc(sizeof(struct node));
	printf("enter 4 data values \n");
	scanf("%d%d%d%d",&n1->data,&n2->data,&n3->data,&n4->data);
	n1->prev = NULL;
	n1->next = n2;
	n2->prev = n1;
	n2->next = n3;
	n3->prev = n2;
	n3->next = n4;
	n4->prev = n3;
	n4->next = NULL;
	head = n1;
	display();
}
void insert_begin(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter newnode data \n");
	scanf("%d",&newnode->data);
	newnode->data;
	newnode->next = head;
	newnode->prev = NULL;
	head = newnode;
	display();
}
void insert_end(){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter newnode data \n");
	scanf("%d",&newnode->data);
	newnode->data;
	newnode->next = NULL;
	struct node*temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;
	display();
}
void insert_position(){
struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter newnode data \n");
	scanf("%d",&newnode->data);
	newnode->data;
	int i,position;
	printf("enter the position \n");
	scanf("%d",&position);
	struct node*temp = head;
	for(i=1;i<position;i++)
	{
		if(temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	display();
}
int main(){
	int choice;
	while(1){
		printf("\n1.create_list \n2.insert_at_beginning \n3.insert_at_end \n4.insert_at_position");
		printf("enter choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case1:
				create_list();
				break;
			case2:
				insert_at_beginning();
				break;
			case3:
				insert_at_end();
				break;
			case4:
				insert_at_position();
				break;
			default:
				printf("invalid choice");
		}
	}
	return 0;
}
