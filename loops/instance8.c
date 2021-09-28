#include <stdio.h>
#include <string.h>
int main() {
    char name[50];
    int size;
    printf("Ingresa un string: ");
    scanf("%s", name);
    size = strlen(name);
    printf("El tamano del array es %i\n", size);
    for(int i = size-1; i >= 0; i--) {
        printf("Indice %d, caracter %c\n", i, name[i]);
    }
    printf("\n");
    return 0;
}