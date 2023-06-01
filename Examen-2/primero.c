#include<stdio.h>
#include<math.h>

int multiplicaEnteros();

int main()
{
	int uWu;

	res = multiplicaEnteros();
	printf("El resultado de la multiplicacion es: %d", uWu);
}

int multiplicaEnteros()
{
	int a = 0, b = 0;
	int i, mul,mu = 0;
	int c;
    int numero,datos, respuesta;
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