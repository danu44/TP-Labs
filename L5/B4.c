#include <stdio.h>

#define MAX_SIZE 100
 
void Push(int x, int *ArrayStack, int *top)
{
	if (top == MAX_SIZE - 1)
	{
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++(*top)] = x;
}

void Pop(int *top)
{
	if (*top == -1)
	{
		printf("Error: No element to pop\n");
		return;
	}
	(*top)--;
}
 
int Peek(int *ArrayStack, int *top)
{
	return ArrayStack[*top];
}

void IsEmpty(int *top)
{
	if (*top == -1)
	{
		printf("Is empty\n");
	}
	else
		printf("Is not empty\n");
}
 
void Print(int *ArrayStack, int *top) {
	int i;
	printf("Stack: ");
	for (i = 0; i <= *top; i++)
	{
		printf("%d ", ArrayStack[i]);
	}
	printf("\n");
}

int main()
{
	int *ArrayStack[MAX_SIZE];
	int *top = -1;

	IsEmpty(&top);
	Push(2, &ArrayStack, &top);
	Print(&ArrayStack, &top);
	IsEmpty(&top);
	printf("Peek: %d\n", Peek(&ArrayStack, &top));
	Push(5, &ArrayStack, &top);
	Print(&ArrayStack, &top);
	Push(10, &ArrayStack, &top);
	Print(&ArrayStack, &top);
	printf("Peek: %d\n", Peek(&ArrayStack, &top));
	Pop(&top);
	Print(&ArrayStack, &top);
	system("pause");
	return 0;
}