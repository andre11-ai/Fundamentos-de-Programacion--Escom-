#include <stdio.h>
/*
Realizar el diagrama en flujo y un programa en C que le permita a una investigadora
 conocer la media de las 5 mediciones de temperatura adquiridas dentro de un cuerpo de agua. 
 */
int main(){

    float cel, fah, kel, ran, rea, tem;
    int iOpcion;
    
    printf("Temperatura de un cuerpo de agua en las 5 mediciones\n\n");
    printf("Ingresa la temperatura del cuerpo de agua\n");
    scanf("%f", &tem);

  while(tem > 0){
        printf("\nMenu de divisas \n\n");
        printf("\t1) Celcius a Celsius °C\n");
        printf("\t2) Temperatura a Fahrenheit °F\n");
        printf("\t3) Temperatura a Kelvin K\n");
        printf("\t4) Temperatura a Rankine °Ra\n");
        printf("\t5) Temperatura a Reaumur °Re\n");
        printf("\t6) Salir");
        printf("\n");
        scanf("%i", &iOpcion);
 
        if (iOpcion == 1){
            cel = tem ;
            printf("%.2f Temperatura en °C equivalen a %.2f grados en °C\n", tem, cel);
            }
    
        else if (iOpcion == 2){
            fah = (tem *9/5)+32;
            printf("%.2f Temperatura en °C equivalen a %.2f grados en °F\n", tem,fah);
            }
    
        else if (iOpcion == 3){
            kel = tem+273.15;
            printf("%.2f termperatura en °C  equivalen a %.2f Grados en K\n", tem,kel);
            }

        else if (iOpcion == 4){
            ran = tem*9/5+491.67;
            printf("%.2f Temperatura en °C equivalen a %.2f grados en °Ra \n", tem, ran);
            }
    
        else if (iOpcion == 5){
            rea = 4*tem/5;
            printf("%.2f Temperatura en °C equivalen a %.2f grados en °Re\n", tem,rea);
            }
    
        system("PAUSE");
  }

return 0;

}
