//#include <stdio.h>
//
//void save(int *v, int n)
//{
//	v[n / 8] |= (1 << 8 * (n / 8 + 1) - 1 - n);
//	printf("Numar salvat\n");
//}
//
//int main()
//{
//	char v[126] = {0};
//	int n = 0;
//	char op = 'y';
//	do
//	{
//		printf("Introduceti numarul: ");
//		scanf("%d", &n);
//		save(&v, n);
//		printf("Continuati? (y/n): ");
//		scanf(" %c", &op);
//	} while (op != 'n');
//	system("pause");
//	return 0;
//}