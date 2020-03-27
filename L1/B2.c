#include <stdio.h>

int main()
{
	int v[] = { 1, 2, 3, 4, 5, 6, 7 };
	int i, x, initial = 0, n = 7, actual;
	printf("Introduceti numarul cautat: ");
	scanf("%d", &x);
	while (initial <= n)
	{
		actual = (initial + n) / 2;
		if (v[actual] == x)
		{
			printf("Pozitia: %d\n", actual);
			break;
		}
		if (v[actual] > x)
			n = actual - 1;
		if (v[actual] < x)
			initial = actual + 1;
	}
	system("pause");
	return 0;
}