#include<stdio.h>
#include<conio.h>
#define size
int stack[20];
int i,n,top ;
void push();
void pop();
void show();
void main()
{
	//clrscr();
	int select = 0;
	printf("Enter the number of stack");
	scanf("%d",&n);
	while(select!=4)
	{
		printf("choose any one option  \n");
		printf("\n 1.push\n 2.pop\n 3.show\n 4.exit");
		printf("\n please Enter select value\n");
		scanf("%d",&select);
		switch(select)
			{
				case 1:
					{
						push();
						break;
					}
				case 2:
					{
						pop();
						break;
					}
				case 3:
					{
						show();
						break;
					}
				case 4:
					{
						printf("exitting");
						break;
					}
				default:
					{
						printf("please select valid value");
					}
				
			}
		
	}	
}
void push(int value)
{
	if(top == size-1)
	{
		printf("\n stack is overflow");
	}

	else
	{
		printf("Enter the value");
		scanf("%d",&value);
		top = top+1;
		stack[top] = value;
	}
}
void pop()
{
	if(top == -1)
	{
		printf("stack is underflow");
	}
	else
	{
		top = top-1;
		printf("\n\t the pop element is", stack[top]);
	}	
}
void show()
{
	if(top == -1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("\n stack elements\n:");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}	
	}
}
