#include <stdio.h>

#define maxSize 101

int A[maxSize];
int top=-1;

void push(int x)
{
	if(top==maxSize-1)
	{
		printf("Stack Overflow. \n");
		return;
	}
	A[++top]=x;
}

void pop()
{
	if(top==-1)
	{
		printf("Stack underflow. \n");
		return;
	}
	top--;
}

int Top()
{
	return A[top];
}

void Print()
{
	int i;
	printf("Stack: ");
	for (i = 0; i <=top; i++)
		printf("%d ",A[i]);
	printf("\n");
}

int main()
{
	push(2); Print();
	push(5); Print();
	push(11); Print();
	pop(); Print();
	push(10); Print();
	push(12); Print();
	int t;
	t=Top();
	printf("%d is on top.\n",t );
}