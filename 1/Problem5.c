#include <stdio.h>
#include <conio.h>

// Q5. Represent a queue using a stack

// predefined queue of 100 elements
int queue[100]={0};
// end position of queue
int end=-1;
// top of the queue
int top=0;

// add into the queue
void push(char data)
{
	queue[++end]=data;
}

// remove from the queue and return it
void pop()
{	
	int i;
	if(end>=top)
	{
		printf("%d ",queue[top]);
		for(i=top;i<=end;i++)
		{
			queue[i]=queue[i+1];
		}
		end--;
	}
	else
		printf("Empty");
}

// display the whole queue
void display()
{
	int i;
	for(i=top;i<=end;i++)
	{
		printf("\n%d",queue[i]);
	}
}

// main function
int main()
{
	int sum = 0;
	push(10);
	push(20);
	push(30);
	pop();
	pop();
	pop();
//	display();
}
