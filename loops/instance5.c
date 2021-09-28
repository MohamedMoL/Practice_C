#include <stdio.h>
#include <string.h>
int main() {
    int intList[3][4];
    for(int row = 0; row <= 2; row++) {
        int sum = 0;
        for(int column = 0; column <= 3; column++) {
            printf("Numero de la fila %i y columna %i: ", row, column);
            scanf("%i", &intList[row][column]);
            sum += intList[row][column];
            if(column == 3) {
            printf("Sumatoria de la fila %i: %i\n", row, sum);
            }
        }
    }
    return 0;
}