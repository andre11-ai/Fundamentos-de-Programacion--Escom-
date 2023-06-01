#include <stdio.h>

void main()
{

	int mat1[20][20];
	int mat2[20][20];
	int mat3[20][20];
	int i, j, n;
	float num, sum = 0, prom;
	printf("\n\tDe que tamaño seran las matrices?: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("\n\tMatriz 1 Posicion [%d][%d] con valor de :", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("\n\tMatriz 2 Posicion [%d][%d] con valor de :", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("\n\tESTE SERIA EL RESULTADO DE LA MATRIZ 3");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mat3 [i][j]= mat1[i][j] + mat2[i][j];
			printf("\t[%d]", mat3[i][j]);
		}
	}
}