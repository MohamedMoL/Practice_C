#include <stdio.h>
#include <string.h>
int main() {
    float intList[5][6];
    for(int row = 0; row < 5; row++) {
        float sum = 0;
        for(int column = 0; column <= 4; column++) {
            printf("Valor(%i, %i): ", row, column);
            scanf("%f", &intList[row][column]);
            sum += intList[row][column];
            printf("Sumatoria de la fila %i hasta la columna %i: %f\n", row, column, sum);
            if(column == 4) {
                intList[row][5] = sum / 5;
                sum += intList[row][5];
                printf("La media de la fila %i es: %f\n\n", row, sum/6);
            }
        }
    }
    return 0;
}