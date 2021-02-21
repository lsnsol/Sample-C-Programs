#include <stdio.h>
#include <conio.h>

// Q4. Create a stack of numbers and pop them to give summation.

// predefined stack of 100 elements
int stack[100]={0};
// end position of stack
int end=-1;
// top of the stack
int top=0;

// push into the stack
void push(char data)
{
	end++;
	for(int i=end;i>top;i--)
	{
		stack[i]=stack[i-1];
	}
	stack[top]=data;
}

// pop from the stack and return it
int pop()
{	
	int i;
	int popped;
	if(end>=top)
	{
		popped = stack[top];
		for(i=top;i<=end;i++)
		{
			stack[i]=stack[i+1];
		}
		end--;
	}
	else
		printf("Empty");
//	printf("%d ",popped);		
	return popped;
}

// display the whole stack
void display()
{
	int i;
	for(i=top;i<=end;i++)
	{
		printf("\n%d",stack[i]);
	}
}

// main function
int main()
{
	int sum = 0;
	push(10);
	push(20);
	push(30);
	sum += pop();
	sum += pop();
	sum += pop();
	printf("Summation: %d", sum);
}
