#include <stdio.h>
/*
Realizar el diagrama de flujo y un programa en C que realice la conversión de pesos a dólares, 
de dólares a pesos y de dólares a euros para apoyar las operaciones de cambio de divisa dentro 
de una casa de cambio. 
*/

int main(){

    float fPesos, fEuro, fDolar, fPesos1;
    int iOpcion;
    
    printf("Divisas \n\n");
    printf("Ingresa la cantidad que quiera convertir \n");
    scanf("%f", &fPesos);

  while(fPesos > 0){
        printf("\nMenu de divisas \n\n");
        printf("\t1) Peso a Dolar\n");
        printf("\t2) Peso a Euro\n");
        printf("\t3) Dolar a Euro\n");
        printf("\t4) Dolar a Peso\n");
        printf("\t5) Euro a Dolar\n");
        printf("\t6) Euro a Peso\n");
        printf("\t7) Salir");
        printf("\n");
        scanf("%i", &iOpcion);
 
        if (iOpcion == 1){
            fDolar = fPesos * 0.053;
            printf("%.2f Pesos equivalen a %.2f Dolares\n", fPesos, fDolar);
            }
    
        else if (iOpcion == 2){
            fEuro = fPesos * 0.049;
            printf("%.2f pesos equivalen a %.2f Euros\n", fPesos, fEuro);
            }
    
        else if (iOpcion == 3){
            fEuro = fPesos * 0.93;
            printf("%.2f Dolares  equivalen a %.2f euros\n", fPesos, fEuro);
            }

        else if (iOpcion == 4){
            fPesos1 = fPesos * 18.84;
            printf("%.2f Dolares equivalen a %.2f pesos \n", fPesos, fPesos1);
            }
    
        else if (iOpcion == 5){
            fDolar = fPesos * 1.07;
            printf("%.2f Euros equivalen a %.2f Dolares\n", fPesos, fDolar);
            }
    
        else if (iOpcion == 6){
            fPesos1 = fPesos * 20.21;
            printf("%.2f Euros equivalen a %.2f pesos\n", fPesos, fPesos1);
            }

        system("PAUSE");
  }

return 0;

}