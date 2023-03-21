#include<stdio.h>
#define pi 3.14159265359

/*
Realizar el diagrama de flujo y 
un programa en C que permita realizar el cálculo del área y el perímetro de un círculo. 
*/


int main (){	
	printf("Area y Perimetro de un circulo. \n");
	printf("Introduce el Valor del Radio: ");
	float radio = 0;
	scanf("%f", &radio);
	float area = radio*radio*pi;
    float perimetro = radio*2*pi;
	printf("El Area de un Circulo %f",area);
    printf("El Area de un Perimetro %f",perimetro);

	return 0;
}