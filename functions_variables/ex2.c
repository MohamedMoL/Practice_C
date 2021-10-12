#include <stdio.h>
#include <string.h>

float dollar_to_euro(int a) {
    return a*0.86;
}

float euro_to_dollar(int a) {
    return a*1.16;
}

int main() {
    float money;
    char change;
    printf("Presiona 'e' si quieres pasar de dolares a euros \n");
    printf("Presiona 'd' si quieres pasar de euros a dolares \n\n");
    printf("Escribe la letra: ");
    scanf("%c", &change);
    printf("Inserta la cantidad que quieres cambiar: ");
    scanf("%f", &money);
    if(change == 'e') {
        printf("El dinero cambiado es: %.2f\n", dollar_to_euro(money));
    }
    else if(change == 'd') {
        printf("El dinero cambiado es: %.2f\n", euro_to_dollar(money));
    }
    else {
        printf("Ese input no devuelve nada. \n");
    }
    return 0;
}