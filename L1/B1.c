#include <stdio.h>

int main()
{
	int v[30], i, n, x;
	printf("Introduceti numarul de elemente: ");
	scanf("%d", &n);
	printf("Introduceti elemntele: ");
	for (i = 0; i < n; i++)
		scanf("%d", &v[i]);
	printf("Introduceti elementul cautat: ");
	scanf("%d", &x);
	for (i = 0; i < n; i++)
		if (x == v[i])
		{
			printf("Elementul se afla pe pozitia %d\n", i);
			break;
		}
	system("pause");
	return 0;
}