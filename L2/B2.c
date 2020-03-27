#include <stdio.h>

typedef struct utilizatori
{
	int id;
	char dreptruri;
}Users;

void set(Users *v)
{
	int i, id, drept;

	printf("Introduceti ID-ul utilizatorului: ");
	scanf("%d", &id);
	v[id].dreptruri = 0;
	printf("Setati dreptul pentru Read, Write, Delete, Rename, Copy, 0 - NU, 1 - DA):\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &drept);
		if (drept != 0)
			v[id].dreptruri = v[id].dreptruri | 1 << i;
	}
}

void verify(Users *v)
{
	int i, id;
	printf("Introduceti ID-ul utilizatorului: ");
	scanf("%d", &id);
	printf("Utilizatorul are drepturile de:\n");
	if (v[id].dreptruri & 1 << 0)
		printf("Read ");
	if (v[id].dreptruri & 1 << 1)
		printf("Write ");
	if (v[id].dreptruri & 1 << 2)
		printf("Delete ");
	if (v[id].dreptruri & 1 << 3)
		printf("Rename ");
	if (v[id].dreptruri & 1 << 4)
		printf("Copy ");
}

int main()
{
	Users v[100];
	int i;
	char op = 'y';
	for (i = 0; i < 100; i++)
		v[0].id = i;
	do
	{
		printf("\n1. Seteaza permisiune\n");
		printf("2. Verifica permisiune\n");
		printf("3. Iesire\n");
		scanf(" %c", &op);
		switch (op)
		{
		case '1': set(&v);
			break;
		case '2': verify(&v);
			break;
		}
	} while (op != '3');

	system("pause");
	return 0;
}