#include <stdio.h>
#include <string.h>
char name[] = "Jorge";
int note = 70;
int main() {
    printf("El alumno es: %s\nSu nota es: %i\n", name, note);
    if(note >= 70) {
        printf("El alumno ha aprobado\n");
    }
    else {
        printf("El alumno ha suspendido\n");
    }
    return 0;
}