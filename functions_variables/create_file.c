#include <stdio.h>
#include <string.h>

struct personal_data {
    char name[20];
    char last_name[20];
    char age[20];
};

void main() {
    struct personal_data person;
    FILE *archive;
    archive = fopen("prueba.dat", "rb");

    if (archive != NULL) {
        fread(&person, sizeof(person), 1, archive);
        printf("Nombre: %s\n", person.name);
        printf("Apellido: %s\n", person.last_name);
        printf("Edad: %s\n", person.age);

        // --------------------------------
        //printf("Ingresa un nombre: ");
        //fgets(person.name,20,stdin);
        //printf("%s\n", person.name);
//
        //printf("Ingresa un apellido: ");
        //fgets(person.last_name,20,stdin);
        //printf("%s\n", person.last_name);
//
        //printf("Ingresa la edad: ");
        //fgets(person.age,20,stdin);
        //printf("%s\n", person.age);
//
        //printf("El archivo se ha creado exitosamente\n");
        //fwrite(&person, sizeof(person), 1, archive);
        fclose(archive);
    }
    else {
        printf("El archivo no se ha creado :(\n");
   }
}