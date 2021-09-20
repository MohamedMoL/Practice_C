#include <stdio.h>
//----------------------------------Practice of variables and operations---------------------------------------
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
/*int main(){
    int fahr;
    printf("Pasar grados Fahrenheit\n");
    printf("Ingresa los grados Fahrenheit: ");
    scanf("%i", &fahr);
    float cels = (fahr - 32) * 5 / 9;
    printf("En grados Celsius: %f\n", cels);
    return 0;
}*/
/*int main(){
    int x = 10;
    x += x * 2;
    printf("x: %i\n", x);
    return 0;
}*/
/*int main(){
    int x;
    printf("Ingresa un numero entero: ");
    scanf("%i", &x);
    x %= 5;
    x = ++x;
    printf("x: %i\n", x);
}*/
//-------------------------------------Practice of conditionals-------------------------------------------------
/* int main(){
    int x = 5;
    int y;
    printf("Adivina el numero del 1 al 10\n");
    scanf("%i", &y);
    if(x == y) {
        printf("Has adivinado el numero!\n");
    }
    else{
        printf("No has adivinado el numero\n");
    }
} */
/* int main() {
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
} */
int main() {
    int x;
    printf("Ingresa la nota del alumno, del 0 al 100: ");
    scanf("%i", &x);
    if(x < 60) {
        printf("Suspendiste :( \n");
    }
    else if (x >= 90) {
        printf("Enhorabuena, sacaste un sobresaliente \n");
    }
    else {
        printf("Buen trabajo, has aprobado \n");
    }
    return 0;
}