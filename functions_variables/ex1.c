#include <stdio.h>
#include <string.h>
int sum(int a, int b) {
    return a*b;
}
int main() {
    int base, exponent;
    printf("Ingresa la base: ");
    scanf("%i", &base);
    int result = base;
    printf("Ingresa el exponente: ");
    scanf("%i", &exponent);
    printf("\n");
    for(int i = 1; i < exponent; i++) {
        result = sum(result, base);
    }
    printf("El resultado es: %i\n", result);
    return 0;
}