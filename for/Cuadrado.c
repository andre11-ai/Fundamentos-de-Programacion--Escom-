#include <stdio.h>

int main()
{
    int i,j,num;

    printf("Ingrese el numero del cuadrado UwU: ");
    scanf("%d",&num);

    for(i=0; i<num ; i++){
        for(j=0; j<num; j++)
            printf("*");
        printf("\n");
    }

  
    return 0;
}