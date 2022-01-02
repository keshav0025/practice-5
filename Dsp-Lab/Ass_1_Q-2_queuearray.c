#include<stdio.h>
#include<conio.h>
#define size
void enqueue();
void dequeue();
int front = -1, rear = -1;
int queue[20];
void main()
{
	int choice,n;
	printf("\n Enter the elements in the queue:");
	scanf("%d",&n);
	while(choice !=3)
	{
		printf("\n1.enqueue\n2.dequeue\n3.exit\n");
		printf("\nEnter your chioce");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				printf("exitting");
				break;
			default:
				printf("\n invalid choice");
		}
	}
	
}
void enqueue()
{
	int value;
	printf("\n Enter the value");
	scanf("%d",&value);
	if(rear == size-1)
	{
		printf("\nqueue is overflow");
	}
	if(rear == -1 && front == -1)
	{
		front = 0;
		rear = 0;
	}
	else{
		rear = rear+1;
	}
	queue[rear] = value;
	printf("\n queue added");
}
void dequeue()
{
	if(front == rear)
	{
		printf("\n queue is underflow");
	}
	else{
		printf("\nDeleted : %d", queue[front]);
      front++;
      if(front == rear)
	 front = rear = -1;
	}
	
	
}

