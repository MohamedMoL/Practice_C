#include <stdio.h>
#include <string.h>
int main() {
    int x = 0;
    int y = 1;
    int lim;
    printf("¿Cuantas numeros en sucesion de Fibonacci quieres? (Para una vuelta pon el numero de vueltas mas 2) ");
    scanf("%i", &lim);
    for(int i = 1; i <= lim; i++) {
        if(x < y) {
            printf("Numero %i: %i\n", i, y);
            x += y;
        }
        else {
            printf("Numero %i: %i\n", i, x);
            y += x;
        }
    }
    return 0;
}