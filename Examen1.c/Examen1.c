#include<stdio.h>

int main(){
  int bin=11111111, decimal=0, base=1, remainder, temp;
  float pri, pri1;
 for (temp=bin; temp>0; temp = temp/10){
   remainder = temp % 2;
   decimal = decimal + remainder *base ;
   base= base *2;
 }
 printf("precio una prenda:%d \n", decimal);
 
 pri=decimal*.10;
 pri1=decimal-pri;
printf("descuento de una prenda: %.2f\n",pri1);

 int bin1=11110000, decimal1=0, base1=1, remainder1, temp1;
  float pri3, pri2,suma;
 for (temp1=bin1; temp1>0; temp1 = temp1/10){
   remainder1 = temp1 % 2;
   decimal1 = decimal1 + remainder1 *base1 ;
   base1= base1 *2;
 }
 

 suma=decimal1+decimal;
printf("precio de de dos prendas:%.2f \n", suma);

 pri3=suma*.20;
pri2=suma-pri3;

printf("descuento de dos prendas: %.2f\n",pri2);

int bin2=10101010, decimal2=0, base2=1, remainder2, temp2;
  float x1,x2,suma1;
 for (temp2=bin2; temp2>0; temp2 = temp2/10){
   remainder2 = temp2 % 2;
   decimal2 = decimal2 + remainder2 *base2 ;
   base2= base2 *2;
 }

 suma1=decimal1+decimal+decimal2;
 printf("precio de tres prendas :%.2f \n", suma1);


 x1=suma1*.25;
x2=suma1-x1;

printf("descuento de tres prendas : %.2f\n",x2);


int bin4=1111, decimal4=0, base4=1, remainder4, temp4;
 for (temp4=bin4; temp4>0; temp4 = temp4/10){
   remainder4 = temp4 % 2;
   decimal4 = decimal4 + remainder4 *base4 ;
   base4= base4 *2;
 }

 printf("precio de la cuarta prenda :%d \n",decimal4);


printf("como usted compro una piesa mas ponga su cupon");
 int bin3, decimal3=0, base3=1, remainder3, temp3;
  printf("Ingresa el numero en binario: ");
  scanf("%d", &bin3);
 for (temp3=bin3; temp3>0; temp3 = temp3/10){
   remainder3 = temp3 % 2;
   decimal3 = decimal3 + remainder3 *base3 ;
   base3= base3 *2;
 }
printf("tu descuento es de : %d\n", decimal3);

int y1,ya2,y3,y4;
y1=decimal4*decimal3;
ya2=y1/100;
printf("El precio de la cuarta prenda es de: %.2f", ya2);

}