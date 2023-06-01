#include<stdio.h>
#include<math.h>
int contarElemento();

void main()
{
	int rep = contarElemento();
	
	printf("\n El numero de veces que se repite la letra en la matriz es:%d", rep);

}

int contarElemento()
{
char mat[6][5] ={ 'A', 'B', 'C', 'D', 'A', 'A', 'B', 'B', 'C', 'C', 'A', 'G', 'H', 'J', 'A', 'G', 'T', 'B',
'C', 'C', 'D', 'A', 'U', 'I', 'O', 'O', 'P', 'C', 'A' };
	int i, j;
	int r = 0;
	char l;
	printf("\n introduce la letra a buscar en la matriz:");
	scanf("%c", &l);
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (mat[i][j] == l)
			{
				r++;
			}
		}
	}
	return r;
}