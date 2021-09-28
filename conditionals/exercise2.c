#include <stdio.h>
#include <string.h>
int main() {
    int x, y;
    printf("Ingresa el primer número: ");
    scanf("%i", &x);
    printf("Ingresa el segundo número: ");
    scanf("%i", &y);
    if(x < y) {
        printf("Segun la condicion, el numero seleccionado es: %i\n", x);
    }
    else {
        printf("Segun la condicion, el numero seleccionado es: %i\n", y);
    }
    return 0;
}