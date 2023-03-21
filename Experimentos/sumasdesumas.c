# include <stdio.h>
int i, j, numero,datos, respuesta;
main()
{
printf("introduce el numero de datos a sumar\n");
scanf("%d", & datos);
printf("\n\n\n");
for(i=1; i<=datos; i++){
printf("\n\nintroduzca el dato numero %d", i);
printf("\n\n a sumar: ");
scanf("\n\n%d",&numero);
respuesta=respuesta+numero;
printf("\nla respuesta de esa suma es:%d", respuesta); }
scanf(" ");
}