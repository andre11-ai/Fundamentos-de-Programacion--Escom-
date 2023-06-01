#include <stdio.h>

int main(void)
{
    int lineas;
    printf("Ingresa el numero del triangulo invertido UwU: ");
    scanf("%d", &lineas);
    int i;
    for (i = lineas; i >= 1; i--)
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