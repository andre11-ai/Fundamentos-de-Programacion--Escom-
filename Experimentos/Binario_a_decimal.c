#include<stdio.h>
int main()
{
  int bin, decimal=0, base=1, remainder, temp;
  printf("Ingresa el numero en binario: ");
  scanf("%d", &bin);
 for (temp=bin; temp>0; temp = temp/10){
   remainder = temp % 2;
   decimal = decimal + remainder *base ;
   base= base *2;
 }
 printf("Decimal number is:%d", decimal);
 return 0;
}