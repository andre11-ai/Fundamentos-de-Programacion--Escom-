#include <stdio.h>
/*Realizar el diagrama de flujo y un programa en C
 que permita convertir de segundos a días, horas y minutos.  */

int main() {
    int hor, min, seg,dia;
    printf("\n\n Segundos Totales");
    scanf("%d", &seg);
    dia=seg/86400;
    
    hor= seg/3600;
    
    min=seg/60;
    
    seg=seg;
    
    printf("\n\n Equivalen a %2d dias, %2d de horas, %2d min y de %d segundos \n\n\n" , dia,hor,min,seg  );
}