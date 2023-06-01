#include<stdio.h>
#include<math.h>

int multiplicaEnteros();

void main()
{
	int res;

	res = multiplicaEnteros();
	printf("El resultado de la suma es: %d", res);
}

int multiplicaEnteros()
{
	int a = 0, b = 0;
	int i, mul,mu = 0;
	int c;
	printf("Ingresa el primer valor:  ");
	scanf("%d", &a);
	printf("Ingresa el segundo valor: ");
	scanf("%d", &b);
	printf("Ingresa las repeticiones: ");
	scanf("%d", &c);

	for (i = 0; i < c; i++)
	{
		mul = a * b * c;
	}
	return mul;
}