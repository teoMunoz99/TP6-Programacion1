#include <stdio.h>
#include <ctype.h>

int main(){
    char nombre1[20], nombre2[20], apellido[20], nombreCompleto[40];
    char tamanio = 0;
    printf("Ingrese el primer nombre: \n");
    fflush(stdin);
    gets(nombre1);
    printf("Ingrese el segundo nombre: \n");
    fflush(stdin);
    gets(nombre2);
    printf("Ingrese el apellido\n");
    fflush(stdin);
    gets(apellido);

    //Calculo el tamanio total
    total = strlen(nombre1) + strlen(nombre2) + strlen(apellido);

    return 0;
}
