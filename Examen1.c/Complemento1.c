# include <stdio.h>
int x=6, y=6, z=4;
int main(){
    y=y+4*z;
    y+=x;
    printf("es %d",y);
}