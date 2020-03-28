#include <stdio.h>

#define MAX_SIZE 100

int ArrayStack[MAX_SIZE];
int top = -1;
 
void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++top] = x;
}

void Pop()
{
	if (top == -1)
	{
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

void Print() {
	int i;
	printf("\nForma binara stiva output: ");
	for (i = 0; i <= top; i++)
	{
		printf("%d ", ArrayStack[i]);
	}
	printf("\n");
}

void Binar(int x)
{
	int i;

	for (i = 7; i >= 0; i--)
		printf("%d ", (x & 1 << i) >> i);
}

void inStiva(int x)
{
	int i;

	x ^= 255;
	for (i = 7; i >= 0; i--)
		Push((x & 1 << i) >> i);
}

void Clear()
{
	for (int i = 0; i <= 7; i++)
		Pop();
}

int main()
{
	int n, i, v[MAX_SIZE];
	printf("Introduceti n: ");
	scanf("%d", &n);
	printf("Introduceti numerele\n");

	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	for (i = 0; i < n; i++)
	{
		printf("Input: %d\n", v[i]);
		printf("Forma binara: ");
		Binar(v[i]);
		inStiva(v[i]);
		Print();
		Clear();
	}
	system("pause");
	return 0;
}
