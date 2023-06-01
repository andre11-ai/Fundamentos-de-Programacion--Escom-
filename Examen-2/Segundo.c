#include<stdio.h>
#include<math.h>
int buscarElemento();

void main()
{
	int rep = buscarElemento();
	
	printf("La letra se repite:%d", rep);

}

int buscarElemento()
{
char mat[6][5] ={ 'A', 'B', 'C', 'D', 'A', 'A', 
                  'B', 'B', 'C', 'C', 'A', 'A', 
                  'G', 'H', 'J', 'A', 'G', 'T',
                  'B','C', 'C', 'D', 'A', 'U',
                  'I', 'O', 'O', 'P', 'C', 'A' };
	int i, j;
	int r = 0;
	char l;
	printf("introduce la letra:");
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