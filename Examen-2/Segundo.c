#include<stdlib.h>
#include<stdio.h>

int buscarElemento(char l) {
    int f=5;
    int c=6;
    int i, j;
        
    char m[5][6] = {
        {'A', 'B', 'C', 'D', 'A', 'A'},
        {'B', 'B', 'C', 'C', 'A', 'A'},
        {'G', 'H', 'J', 'A', 'G', 'T'},
        {'B', 'C', 'C', 'D', 'A', 'U'},
        {'I', 'O', 'O', 'P', 'C', 'A'}
    };

    for (j= 0; j < c; j++) {
        for (i = 0; i < f; i++) {
            if (m[i][j] == l) {
                return j;
            }
        }
    }

    return -1;
}

int main() {
	
    char l;
    printf("Ingrese lo que quiere buscar UwU: ");
    scanf("%c", &l);
	int la = buscarElemento(l);

    if (la != -1) {
        printf("El elemento '%c' se encontro en la columna %d.\n", l, la);
    } else {
        printf("El elemento '%c' no se encontro en la matriz.\n", l);
    }

    return 0;
}