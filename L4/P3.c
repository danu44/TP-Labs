#include <stdio.h>

int main()
{
	int a, b, *aux;
	printf("Introduceti a si b: ");
	scanf("%d %d", &a, &b);
	aux = (int *)malloc(sizeof(int));
	*aux = a;
	a = b;
	b = *aux;
	printf("a = %d, b = %d\n", a, b);

	system("pause");
	return 0;
}