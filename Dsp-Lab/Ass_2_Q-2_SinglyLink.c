#include<stdio.h>
#include<conio.h>
#define bool 
struct Node
{
	bool data;
	struct Node* next;
};

int decimalValue(struct Node *head)
{
	int res = 0;

	while (head != NULL)
	{
		res = (res << 1) + head->data;

		head = head->next;
	}
	return res;
}

Node *newNode(bool data)
{
	struct Node *temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}


int main()
{
	struct Node* head = newNode(1);
	head->next = newNode(0);
	head->next->next = newNode(1);
	head->next->next->next = newNode(1);

	cout << "Decimal value is "
		<< decimalValue(head);

	return 0;
}

