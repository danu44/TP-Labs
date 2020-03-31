#include <stdio.h>

#define MAX_SIZE 100

int ArrayStack[MAX_SIZE];
int top = -1;

void push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		return;
	}
	ArrayStack[++top] = x;
}

int pop()
{
	if (top == -1)
	{
		return;
	}
	return ArrayStack[top--];
}

void inStack(int x)
{
	int i;
	printf("\nStack initial: ");
	for (i = 7; i >= 0; i--)
		push((x & 1 << i) >> i);
}

void print() {
	int i;
	for (i = 0; i <= top; i++)
		printf("%d ", ArrayStack[i]);
	printf("\n");
}

void maxim()
{
	int bit[MAX_SIZE], i = -1, j;

	while (top != -1)
	{
		bit[++i] = pop();
	}
	for (j = 0; j < i; j++)
		if (bit[j] == 1)
			push(bit[j]);
	for (j = top; j < 7; j++)
		push(0);
	printf("Stack maxim: ");
	print();
}

int main()
{
	int n;
	do
	{
		printf("Introduceti n: ");
		scanf("%d", &n);
	} while (n > 255 || n < 0);
	inStack(n);
	print();
	maxim();
	system("pause");
	return 0;
}