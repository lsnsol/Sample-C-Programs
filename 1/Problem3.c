#include <stdio.h>
#include <conio.h>

// Q3. Create a stack of characters, push some characters and pop and print them so that it prints your name.

// predefined stack of 100 elements
char stack[100]={0};
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

// pop from the stack and print it
void pop()
{	
	int i;
	if(end>=top)
	{
		printf("%c ",stack[top]);
		for(i=top;i<=end;i++)
		{
			stack[i]=stack[i+1];
		}
		end--;
	}
	else
		printf("Empty ");
}

// display the whole stack
void display()
{
	int i;
	for(i=top;i<=end;i++)
	{
		printf("\n%c",stack[i]);
	}
}

// main function
int main()
{
	push('L');
	push('U');
	push('R');
	push('I');
	push('S');
	push('A');
	push('N');
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
}
