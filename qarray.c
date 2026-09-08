#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void enqueue(int);
void dequeue();
void display();
int queue[SIZE],front = -1,rear = -1;
void main(){
	int value,choice;
	while(1){
		printf("\n \n*****MENU*****\n");
		printf("1.insertion \n2.deletion \n3.display \n4.exit");
		printf("\n enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:
				printf("enter the value to be insert:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case2:
				dequeue();
				break;
			case3:
				display();
				break;
			case4:
				exit(0);
				break;
			default:
				printf("\n wrong selection!!!Try again!!!");
						}
			}
}
void enqueue(int value){
	if(rear == SIZE-1)
	printf("\n queue is FULL");
	else{
		if(front == -1)
		front=0;
		rear++;
		queue[rear]=value;
		printf("\n insertion success!!!");
	}
}
void dequeue(){
	if(front == -1||front>rear)
	printf("\n queue is empty");
	else{
		printf("\n deletion:%d",queue[front]);
		front++;
		if(front>rear)
		front=rear=-1;
	}
}
void display(){
	if(front == -1)
	printf("\n queue is empty");
	else{
		printf("/n queue elements are:");
		for(int i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
			}
}

