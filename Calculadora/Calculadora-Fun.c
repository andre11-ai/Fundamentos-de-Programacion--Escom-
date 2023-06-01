#include <stdio.h>
#include <math.h>

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);



int main() {
  int r;
  float a, b;
  printf("Bienvenido a la Calculadora\n \n");
  printf("Selecciona la opción a elegir\n 1.- Suma\n 2.- Resta\n 3.- Multiplicación\n 4.- División \n");
  scanf("%d", &r);
  if (r==4){
    printf("Introduzca el parametro a operar. \n");
    scanf("%f", &a);

  }else{
     printf("Introduzca los parametros a operar separados por un espacio. \n");
  scanf("%f%f", &a, &b);
    switch(r){
      case 1:
        suma(a,b);
        break;
      case 2:
        resta(a,b);
        break;
      case 3:
        multiplicacion(a,b);
        break;
      case 4:
        division(a,b);
        break;
      default:
      printf("Debe seleccionar una operación. \n");
      
    }
  }
 
}

float suma(float a, float b) {
  float resultado = a + b;
  printf("%f\n", resultado);
  return resultado;
}
float resta(float a, float b) {
  float resultado = a - b;
  printf("%f\n", resultado);
  return resultado;
}
float multiplicacion(float a, float b) {
  float resultado = a * b;
  printf("%f\n", resultado);
  return resultado;
}
float division(float a, float b) {
  float resultado = a / b;
  printf("%f\n", resultado);
  return resultado;
}
