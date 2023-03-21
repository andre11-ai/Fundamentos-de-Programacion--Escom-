#include <stdio.h>

/*Realizar el diagrama de flujo y un programa en C 
que permita convertir de días, horas y minutos a segundos. */

int main(){

    float dia, hor, min, seg, cant;
    int iOpcion;
    
    printf("Convertidor");
    printf("Ingresa la cantidad que quiera convertir \n");
    scanf("%f", &cant);

  while(cant > 0){
        printf("\nMenu de convercion \n\n");
        printf("\t1) segundo a minuto\n");
        printf("\t2) segundo a hora\n");
        printf("\t3) Segundo a dia\n");
        printf("\t4) minuto a segundo\n");
        printf("\t5) minuto a hora\n");
        printf("\t6) minuto a dia\n");
        printf("\t7) hora a segundo\n");
        printf("\t8) hora a minuto\n");
        printf("\t9) hora a dia\n");
        printf("\t10) dia a segundo\n");
        printf("\t11) dia a minuto\n");
        printf("\t12) dia a hora\n");
        printf("\n");
        scanf("%i", &iOpcion);
 
        if (iOpcion == 1){
            min = cant / 60;
            printf("%.2f segundos equivalen a %.2f minutos\n", cant, min);
            }
    
        else if (iOpcion == 2){
            hor = cant / 3600;
            printf("%.2f segundos equivalen a %.2f horas\n", cant, hor);
            }
    
        else if (iOpcion == 3){
            dia = cant /86400;
            printf("%.2f segundos  equivalen a %.2f dias\n", cant, dia);
            }

        else if (iOpcion == 4){
            seg = cant * 60;
            printf("%.2f minutos equivalen a %.2f segundos \n", cant, seg);
            }
    
        else if (iOpcion == 5){
            hor = cant / 60;
            printf("%.2f minutos equivalen a %.2f horas\n", cant, hor);
            }
    
        else if (iOpcion == 6){
            dia = cant / 1440;
            printf("%.2f minutos equivalen a %.2f dias\n", cant, dia);
            }

        else if (iOpcion == 7){
            seg = cant *3600;
            printf("%.2f horas equivalen a %.2f segundos\n", cant, seg);
            }

        else if (iOpcion == 8){
            min = cant * 60;
            printf("%.2f horas equivalen a %.2f minutos\n", cant, min);
            }

        else if (iOpcion == 9){
            dia = cant / 24;
            printf("%.2f horas equivalen a %.2f dias\n", cant, dia);
            }

        else if (iOpcion == 10){
            seg = cant *86400;
            printf("%.2f dias equivalen a %.2f segundos\n", cant, seg);
            }

        else if (iOpcion == 11){
            min = cant * 1440;
            printf("%.2f dias equivalen a %.2f minutos\n", cant, min);
            }

        else if (iOpcion == 12){
            hor = cant * 24;
            printf("%.2f dias equivalen a %.2f horas\n", cant, hor);
            }




        system("PAUSE");
  }

return 0;

}