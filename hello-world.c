#include <stdio.h>
/*int main(){
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
}*/
/*int main(){
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
}*/
int main(){
    int fahr;
    printf("Pasar grados Fahrenheit\n");
    printf("Ingresa los grados Fahrenheit: ");
    scanf("%i", &fahr);
    float cels = (fahr - 32) * 5 / 9;
    printf("En grados Celsius: %f\n", cels);
    return 0;
}