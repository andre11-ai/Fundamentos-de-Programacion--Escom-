#include <stdio.h>
#include <stdlib.h>
void main()
{
	int vec[50];
	int i, j, l, uWu;
	int cond = 0;
	do
	{

		printf("\n\t1.- Pares y Impares");
		printf("\n\t2.- Salir \n\t");
		scanf("%d", &l);
		switch (l)
		{
		case 1:
			printf("Tamaño de Vector?");
			scanf("%d", &j);
			for (i = 0; i < j; i++)
			{
				printf("Numero de vector [%d]", i);
				scanf("%d", &vec[i]);

			}
			for (i = 0; i < j; i++)
			{
				uWu= vec[i] % 2;
				if(uWu==0)
				{
					printf("Par %d ",vec[i],i);
					}
			else
			{
				printf("Impar %d ",vec[i],i);
				}
			}


			printf("Inverso con un poc de avaricia ");
			j = j - 1;
			for (i = j; i >= 0; i--)
			{
				printf("\t[%d]", vec[i]);
			}
			printf("menu");
			break;
		case 2:
			cond = 1;
			break;
		default:
			system("cls");
			printf("No Puede UnU");
			break;
		}
	}
	while (cond == 0);
	system("cls");

}