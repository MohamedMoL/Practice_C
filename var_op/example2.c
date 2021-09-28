#include <stdio.h>
#include <string.h>
int main(){
    float r, h;
    float pi = 3.1416;
    printf("Area y volumen de un cilindro\n");
    printf("Ingresa el radio: ");
    scanf("%f", &r);
    printf("Ingresa la altura: ");
    scanf("%f", &h);
    float area = 2 * pi * r * h + 2 * pi * (r*r);
    float volumen = pi * (r*r) * h;
    printf("El area de la superficie es: %f\n", area);
    printf("El volumen del cilindro es: %f\n", volumen);
    return 0;
}