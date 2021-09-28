#include <stdio.h>
#include <string.h>
int main() {
    int x;
    printf("Estas en un bosque muy grande, de repente encuentras 3 caminos, elige uno (escibe 1, 2 o 3): ");
    scanf("%i", &x);
    switch (x) {
    case 1:
        printf("El camino era demasiado largo, te mueres en el camino :(\n");
        break;
    case 2:
        printf("Caminando un poco consigues salir del bosque :)\n");
        break;
    case 3:
        printf("Habian unos bandidos en el camino que te roban y no consigas sobrevivir sin nada :(\n");
        break;
    }
    return 0;
}