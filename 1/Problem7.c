#include <stdio.h>
#include <conio.h>

// Q7. Represent a queue using a linked list

// struct for creating links
typedef struct node{
	int key;
	struct node *next;
} node;

// various variables for head, traversal, temp, hold
node *head=NULL;
node *trav=NULL;
node *temp=NULL;
node *hold=NULL;


// insert into the linklist
void push(int value)
{
	int i;
	temp=(node*)malloc(sizeof(node*));
	temp->key=value;
	temp->next=NULL;

	if(head==NULL)
		head=temp;	
	else {
		hold=head;
		head=temp;
		temp->next=hold;
	}
}

// delete from the linklist
void pop()
{
	trav=head;
	while(trav->next->next!=NULL)
	{
		trav=trav->next;	
	}
	printf("Popped: %d\n",trav->next->key);
	trav->next=NULL;
}

// print the linklist
void display()
{
	if(head==NULL)
		printf("Empty");
	else
	{
		trav=head;
		while(trav!=NULL)
		{
			printf("Value -> %d\n",trav->key);
			trav=trav->next;
		}
	}
	printf("\n");
}

// main function -1 means normal insertion, deletion, rest integers indicate positions
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	push(70);
	display();
	pop();
	pop();
	display();
	
	return 1;
}
