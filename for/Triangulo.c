#include <stdio.h>

int main(void)
{
    int lineas;
    printf("Ingresa un numero del triangulo UwU: ");
    scanf("%d", &lineas);
    int i;
    for (i = 1; i <= lineas; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}