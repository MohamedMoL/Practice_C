#include <stdio.h>
#include <string.h>
int main() {
    int intList[5];
    int finalOp = 1;
    for(int i = 1; i <= 5; i++) {
        printf("Numero %i: ", i);
        scanf("%i", &intList[i-1]);
        finalOp *= intList[i-1];
        if(i == 5) {
            printf("El resultado es: %i\n", finalOp);
        }
    }
    return 0;
}