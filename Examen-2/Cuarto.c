#include <stdio.h>

int promedioMatriz();

int main(){
	promedioMatriz();
}

int promedioMatriz(){
	int i, j, ran[5][5] = { {5, 4, 3}, {1, 2, 3}, {4, 4, 0}, {3, 8, 0} };
	float num, sum = 0, prom;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = ran[i][j] + sum;
		}
	}
	printf("La suma de la Matriz es:  %.2f  UwU", sum);
}