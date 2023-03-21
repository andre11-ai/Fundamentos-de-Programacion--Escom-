#include <stdio.h>
/*
Realizar el diagrama en flujo y un programa en C que le permita a una investigadora
 conocer la media de las 5 mediciones de temperatura adquiridas dentro de un cuerpo de agua. 
 */
int main() {
    int cel, fah, kel, ran, rea;
    printf("Temperatura de un cuerpo de agua en las 5 mediciones\n");
    printf("\n\n Grados Celsius: ");
    scanf("%d", &cel);
    cel=cel;
    fah= (cel*9/5)+32;
    kel=cel+273.15;
    ran=cel*9/5+491.67;
    rea=4*cel/5;
    printf("\n\n La temperatura equivae a %.2d Grados °C, %.2d Grados °F, %.2d Grados K, %.2d Grados °Ra y  %.2d Grados °Re  \n\n\n" ,cel,fah,kel,ran,rea );
}