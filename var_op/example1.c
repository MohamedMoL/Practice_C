#include <stdio.h>
#include <string.h>
int main(){
    int x, y, z;
    printf("Da el valor de x: ");
    scanf("%i", &x);
    printf("Da el valor de y: ");
    scanf("%i", &y);
    z = x;
    x = y;
    y = z;
    printf("El valor intercambiado de x es: %i\n", x);
    printf("El valor intercambiado de y es: %i\n", y);
    return 0;
}