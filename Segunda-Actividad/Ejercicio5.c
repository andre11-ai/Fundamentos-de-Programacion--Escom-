#include <stdio.h>
/*
Realizar el diagrama en flujo y un programa en C que le permita a una investigadora
 conocer la media de las 5 mediciones de temperatura adquiridas dentro de un cuerpo de agua. 
 */
int main (){	
	printf("5 Mediciones \n");
    float pri=10,seg=51,ter=92,cue=52,qui=15;
    float suma =0 , media=0;
    suma = pri+seg+ter+cue+qui;
    media = suma/5;
    printf("el resultado es: %.2f" ,media);

	return 0;
}