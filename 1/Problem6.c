#include <stdio.h>
#include <conio.h>

// Q6. Swap 2 nodes of a Linked List using pointer

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
node *insert(int value,int pos)
{
	int i;
	temp=(node*)malloc(sizeof(node*));
	temp->key=value;
	temp->next=NULL;
	
	if(head==NULL)
		head=temp;
			
	else if(pos==-1)
	{
		trav=head;
		while(trav->next!=NULL)
			trav=trav->next;
		trav->next=temp;	
	}
	else if(pos==1)
	{
		hold=head;
		head=temp;
		temp->next=hold;
	}
	else
	{
		trav=head;
		for(i=1;i<pos-1;i++)
			trav=trav->next;
		
		hold=trav->next;
		trav->next=temp;
		temp->next=hold;
	}
	return head;
}

// delete from the linklist
node *delete(int pos,int value)
{
	int i;
	trav=head;
	if(pos==-1)
	{
		pos=1;
		while(trav!=NULL && trav->key!=value)
		{
			pos++;
			trav=trav->next;	
		}
	}
	
	if(pos>1)
	{
		trav=head;
		for(i=1;i<pos-1;i++)
			trav=trav->next;
		trav->next=trav->next->next;
	}
	else if(pos==1)
	{
		head=head->next;
	}
	return head;
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

void swap(int pos1, int pos2){
	int pos=1;
	trav=head;
	
	node *link1=NULL;
	node *link2=NULL;
	
	while(trav!=NULL)
		{
			if(pos == pos1)
				link1 = trav;

			if(pos == pos2)
				link2 = trav;
		
			pos++;
			trav=trav->next;	
		}
	
	int data = link1->key;
	
	link1->key = link2->key;
	link2->key = data;
}

// main function -1 means normal insertion, deletion, rest integers indicate positions
int main()
{
	head=NULL;
	head=insert(10,-1);
	head=insert(20,-1);
	head=insert(30,-1);
	head=insert(40,-1);
	head=insert(50,-1);
	display();
	head=insert(60,1);
	head=insert(70,3);
	display();
	head=delete(-1,70);
	head=delete(5,0);
	display();
	swap(1,2);
	display();
}
