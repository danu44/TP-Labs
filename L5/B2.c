#include <stdio.h>
#include <stdbool.h>

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

void print() {
	int i;
	for (i = 0; i <= top; i++)
		printf("%d ", ArrayStack[i]);
	printf("\n");
}

bool bit(int x, int c)
{
	return ((x & 1 << c) >> c);
}

int main()
{
	int n, c, i, x;
	printf("Introduceti c (0-7): ");
	scanf("%d", &c);
	printf("Introduceti n: ");
	scanf("%d", &n);
	printf("Introduceti numerele: ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (bit(x, c))
			push(x);
	}
	print();
	system("pause");
	return 0;
}