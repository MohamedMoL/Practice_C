#include <stdio.h>
#include <string.h>
int main(){
    int x;
    printf("Ingresa un numero entero: ");
    scanf("%i", &x);
    x %= 5;
    x = ++x;
    printf("x: %i\n", x);
}