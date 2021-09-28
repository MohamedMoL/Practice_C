#include <stdio.h>
#include <string.h>
int main() {
    int size;
    printf("Ingresa el largo del array: ");
    scanf("%i", &size);
    int intList[size];
    int mostBigNum = 0;
    for(int i = 0; i < size; i++){
        printf("Valor (%i): ", i);
        scanf("%i", &intList[i]);
        if(mostBigNum < intList[i]) {
            mostBigNum = intList[i];
        }
    }
    printf("El numero mas grande de la lista es: %i\n", mostBigNum);
    return 0;
}