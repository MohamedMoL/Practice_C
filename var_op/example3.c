#include <stdio.h>
#include <string.h>
int main(){
    int fahr;
    printf("Pasar grados Fahrenheit\n");
    printf("Ingresa los grados Fahrenheit: ");
    scanf("%i", &fahr);
    float cels = (fahr - 32) * 5 / 9;
    printf("En grados Celsius: %f\n", cels);
    return 0;
}