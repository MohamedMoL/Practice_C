#include <stdio.h>
#include <string.h>
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