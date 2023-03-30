#include <stdio.h>

int main() {	
	int n, c, k;
	
	printf("Ingresa el número decimal: ");
	scanf("%d", &n);
	
	printf("%d en binario es: ", n);
	
	for (c=10;c>=0;c--){
		k = n>>c;
		if (k&1){
			printf("1");
		}else {
			printf("0");
		}
	}	
	printf("\n");	
	return 0;
}