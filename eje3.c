#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // apartado a.
    char nombre1[20], nombre2[20], apellido[20];
    char tamanio = 0;
    printf("Ingrese el primer nombre: \n");
    gets(nombre1);
    printf("Ingrese el segundo nombre: \n");
    gets(nombre2);
    printf("Ingrese el apellido\n");
    gets(apellido);

    // Calculo el tamanio total
    tamanio = strlen(nombre1) + strlen(nombre2) + strlen(apellido) + 3;
    // Declaro un nuevo arreglo para guardar todos los otros en este
    char nombreCompleto[tamanio];

    // Guardo el primer nombre en el arreglo nombreCompleto
    for (int i = 0; i < strlen(nombre1); i++)
    {
        nombreCompleto[i] = nombre1[i];
    }

    //Aagrego un espacio
    nombreCompleto[strlen(nombre1)] = ' ';

    // Guardo el segundo nombre
    for (int i = 0; i < strlen(nombre2); i++)
    {
        nombreCompleto[strlen(nombre1) + 1 + i] = nombre2[i];
    }

    //Agrego un espacio
    nombreCompleto[strlen(nombre1) + strlen(nombre2) + 1] = ' ';

    // Guardo el apellido
    for (int i = 0; i < strlen(apellido); i++) {
        nombreCompleto[strlen(nombre1) + strlen(nombre2) + 2 + i] = apellido[i];
    }

    // Agrego el carácter nulo al final
    nombreCompleto[tamanio - 1] = '\0';

    //Muestro el arreglo
    puts(nombreCompleto);

    //apartado b.

    //agrego el lugar para el punto
    tamanio = tamanio + 1;
    //Agrego un punto
    nombreCompleto[tamanio - 2] = '.';

    // Agrego el carácter nulo al final
    nombreCompleto[tamanio - 1] = '\0';

    //Borro los espacios
    for (int i = 0; i < tamanio; i++)
    {
        if(nombreCompleto[i] == ' '){
            for (int j = i; j < tamanio; j++)
            {
                nombreCompleto[j] = nombreCompleto[j + 1];
            }
        }
    }
    
    //Muestro el arreglo
    printf("El nuevo arreglo es: ");
    puts(nombreCompleto);
    

    return 0;
}
