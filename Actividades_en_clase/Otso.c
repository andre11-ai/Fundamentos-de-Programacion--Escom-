#include <stdio.h>
#include<stdlib.h>

/*

 */
int main (){

    printf("Bienvenido al OTSO\n");
    
	printf("Tus productos tienen costo de (Con descuento):\n");

    float x1=10,x2=10,x3=10,x4=10,x5=10;
    float por1 =0, por2=0 ,por3=0,por4=0,por5=0,por6=0, descuento=0;
    float pre1=0,pre2=0,pre3=0,pre4=0;
    por1=x1;
    por2= x2*.10;
    pre1=x2-por2;
    por3=x3*.15;
    pre2=x3-por3;
    por4=x4*.20;
    pre3=x4-por4;
    por5=x5*.45;
    pre4=x5-por5*.50;

    printf("Burro %.2f pesos, Refresco %.2f pesos, Energizante  %.2f pesos , Queso %.2f pesos y jugo  %.2f pesos \n",por1,pre1,pre2,pre3,pre4);
    descuento=por1+pre1+pre2+pre3+pre4;
    printf("El total es: %.2f pesos",descuento);
	return 0;
}