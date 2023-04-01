#include <stdio.h>
#include <ctype.h>
 
int main(){
   char cadena[50];
   int i;
 
   printf("\nEscribe un letra o frase: ");
   scanf("%s", &cadena);
 
   for(i = 0; cadena[i]; i++) 
      cadena[i] = toupper(cadena[i]);


   int pre1=100;
   float x1,x2;

   x1=pre1*.20;
   x2=pre1-x1;

printf("Precio de culaquier prenda: 100$\n");

printf("Una sola prenda\n");
printf("******************************************\n");
printf("*                                        *\n") ;  
printf("*                  %s                 *\n", cadena);
printf("*                                        *\n");
printf("******************************************\n");
printf("*    *    *    *    *    *    *    *     *\n");
printf("*                                        *\n");
printf("*         !GRACIAS POR SU COMPRA         *\n");
printf("*                                        *\n");
printf("*           USTED AHORRO: %.2f          *\n", x2);
printf("*            USTED PAGO: %.2f           *\n",x1);
printf("*                                        *\n");
printf("******************************************\n");

   int pre2=100,pre3=100;
   float x3,x4,x5;
   x3=pre2+pre3;
   x4=x3/2;
   x5=x3-x4;

printf("Dos Piezas prendas\n");
printf("******************************************\n");
printf("*                                        *\n") ;  
printf("*                  %s                 *\n", cadena);
printf("*                                        *\n");
printf("******************************************\n");
printf("*    *    *    *    *    *    *    *     *\n");
printf("*                                        *\n");
printf("*         !GRACIAS POR SU COMPRA         *\n");
printf("*                                        *\n");
printf("*           USTED AHORRO: %.2f         *\n", x4);
printf("*            USTED PAGO: %.2f          *\n",x5);
printf("*                                        *\n");
printf("******************************************\n");

   int pre4=100,pre5=100,pre6=100;
   float x6,x7,x8,x9;

   x6=pre4+pre5+pre6;
   x7=x6*.40;
   x8=x6-x7;

printf("Tres Prendas Compradas\n");
printf("******************************************\n");
printf("*                                        *\n") ;  
printf("*                  %s                 *\n", cadena);
printf("*                                        *\n");
printf("******************************************\n");
printf("*    *    *    *    *    *    *    *     *\n");
printf("*                                        *\n");
printf("*         !GRACIAS POR SU COMPRA         *\n");
printf("*                                        *\n");
printf("*           USTED AHORRO: %.2f         *\n", x7);
printf("*            USTED PAGO: %.2f          *\n",x8);
printf("*                                        *\n");
printf("******************************************\n");
}
 