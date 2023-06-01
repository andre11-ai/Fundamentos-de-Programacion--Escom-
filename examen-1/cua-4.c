#include <stdio.h>

void promedioMatriz();

void main()
{
	promedioMatriz();
}

void promedioMatriz()
{
	int numRamdom[4][3] = { {1, 0, 4}, {5, 3, 2}, {4, 12, 3}, {5, 2, 0} };
	int i, j;
	float num, sum = 0, prom;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = numRamdom[i][j] + sum;
		}
	}
	prom = (sum / 12);
	printf("El promedio de la matriz es %.2f", prom);
}