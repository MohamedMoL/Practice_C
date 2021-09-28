#include <stdio.h>
#include <string.h>
int main(){
    int x = 5;
    int y;
    printf("Adivina el numero del 1 al 10\n");
    scanf("%i", &y);
    if(x == y) {
        printf("Has adivinado el numero!\n");
    }
    else{
        printf("No has adivinado el numero\n");
    }
}