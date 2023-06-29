#include <stdio.h>


void main()
{

	int mat1[25][25];
	int mat2[25][25];
	int mat3[25][25];
	int mat4[25][25];
	int *mat5[25][25];
	int *mat6[25][25];
	int i, j, n, parono;
	int producto = 0;
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
	printf("\n\tEl resultado de la Matriz 3 es el siguiente \n\t");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
			printf("[%d]", mat3[i][j]);
		}
	printf("\n\t");
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			parono = mat3[i][j] % 2;
			if (parono == 0)
			{
				printf("\n\tNumero %d en la posicion [%d][%d] es par", mat3[i][j], i, j);
			}
			else
			{
				printf("\n\tNumero %d en la posicion [%d][%d] es impar", mat3[i][j], i,
					   j);
			}

		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			parono = mat3[i][j] % 2;
			if (parono == 0)
			{
				mat4[i][j] = 1;
				printf("\n\tEn la posicion [%d][%d] es par con:   %d", i, j, mat4[i][j]);
			}
			else
			{
				mat4[i][j] = 0;
				printf("\n\tEn la posicion [%d][%d] es impar con: %d", i, j, mat4[i][j]);
			}
		}
	}
for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mat5[i][j] = &mat3[i][j];
		    mat6[i][j] = &mat4[i][j];
		printf("\n\tLa direccion de almacenamiento de [%d][%d] esta en: %p", i,j, mat5[i][j]);
		printf("\n\tLa direccion de almacenamiento de [%d][%d] esta en: %p", i,j, mat6[i][j]);
		}
	}
}