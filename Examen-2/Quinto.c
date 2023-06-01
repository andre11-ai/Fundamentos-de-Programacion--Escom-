#include <stdio.h>

int main(){

	int m1[10][10];
	int m2[10][10];
	int m3[10][10];
	int i, j, a;

	printf("Cuanto quiere que almacene la matriz UwU: ");
	scanf("%d", &a);
	for (i = 0; i < a; i++){
		for (j = 0; j < a; j++)
		{
			printf("Matriz 1 [%d][%d] con valor de :", i, j);
			scanf("%d", &m1[i][j]);
		}
	}
	for (i = 0; i < a; i++){
		for (j = 0; j < a; j++)
		{
			printf("Matriz 2  [%d][%d] con valor de :", i, j);
			scanf("%d", &m2[i][j]);
		}
	}
	printf("ESTE SERIA EL RESULTADO DE LA MATRIZ 3");
	for (i = 0; i < a; i++){
		for (j = 0; j < a; j++)
		{
			m3 [i][j]= m1[i][j] * m2[i][j];
			printf("\t[%d]", m3[i][j]);
		}
	}
}