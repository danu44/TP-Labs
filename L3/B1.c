#include <stdio.h>

void binar(unsigned int x)
{
	int i;
	
	for (i = 7; i >= 0; i--)
		printf("%d ", (x & 1 << i) >> i);
}

int main()
{

	int n, i;
	unsigned int x;
	printf("Introduceti n: ");
	scanf("%d", &n);
	printf("Introduceti numerele\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		printf("Forma binara:\n");
		binar(x);
		x ^= 255;
		printf("\nInversul binar:\n");
		binar(x);
		printf("\nForma zecimala: %d\n", x);
	}

	system("pause");
	return 0;
}