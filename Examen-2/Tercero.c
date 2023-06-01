#include <stdio.h>

#include <stdlib.h>
void main()
{
	int vec[50];
	int i, j, op;
	int cond = 0;
	do
	{
		printf("\n\tBIENVENIDO INGRESE UNA OPCION VALIDA");
		printf("\n\t1.- Ingresar Vector e Invertirlo ");
		printf("\n\t2.- Salir \n\t");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			printf("\n\tCual es el tamaño del vector?");
			scanf("%d", &j);
			for (i = 0; i < j; i++)
			{
				printf("\n\tPonga el numero de la pocision [%d]", i);
				scanf("%d", &vec[i]);

			}
			printf("\n\tEste seria el vector inverso \n");
			
  if (i % 2 == 0) {
    printf("Es par");
  } else {
    printf("Es impar");
  }
			printf("\n\tDesea hacer otra Operacion? (Si 0 / No 1)");
			scanf("%d", &cond);
			system("cls");
			break;
		case 2:
			cond = 1;
			break;
		default:
			system("cls");
			printf("\n\tINGRESE OPCION VALIDA");
			break;
		}
	}
	while (cond == 0);
	system("cls");
	printf
		("\n\n\n\n\t\t\t*C I E R R E  E L  P R O G R A M A  O  R E I N I C I E  P O R  F A V O R*");
	printf("\n\n\n\n\t\t\t                   *  G  R  A  C  I  A  S    =D  *");
}