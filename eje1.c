#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 20

void cargarArreglo(int arreglo[], int tama, int num1, int num2);
void cargarArreglo(int arreglo[], int tama, int num1, int num2)
{
    int reemplazo=0;
    for (int i = 0; i < tama; i++)
    {
        arreglo[i] = rand() % num2 + num1;
        if(arreglo[i]>300){
            printf("El numero generado '%d' es mayor a 300, ingrese un reemplazo: \n", arreglo[i]);
            scanf("%d", &reemplazo);
            arreglo[i] = reemplazo;
        }
    }
}

void mostrarArreglo(int arreglo[], int tama);
void mostrarArreglo(int arreglo[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("%d, ", arreglo[i]);
    }
}

int buscarMayor(int arreglo[], int tama);
int buscarMayor(int arreglo[], int tama){
    int mayor = 0;
    for (int i = 0; i < tama; i++)
    {
        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }
    return mayor;
}

void mostrarPromedio(int arreglo[], int tama);
void mostrarPromedio(int arreglo[], int tama){
    float promedio = 0;
    int total;
    for (int i = 0; i < tama; i++)
    {
        if( i % 2 != 0){
            total = total + arreglo[i];
        }
    }
    promedio = total / tama;
    printf("El promedio de impares es: %f \n", promedio);
}

void incrementarImpares(int arreglo[], int tama);
void incrementarImpares(int arreglo[], int tama){
    for(int i=0; i<tama; i++){
        if(arreglo[i] % 2 != 0){
            arreglo[i]= arreglo[i] + 1;
        }
    }
}

int main()
{
    // cambia la semilla que da origen al numero aleatorio
    srand(time(NULL));
    //
    //Declaro el arreglo y variables
    int numerosAleatorios[TAMA];
    int mayor = 0;
    //Llamo a las funciones
    cargarArreglo(numerosAleatorios, 15, 10, 350);
    printf("El arreglo generado es: ");
    mostrarArreglo(numerosAleatorios, 15);
    printf("\n ============= \n");
    mayor = buscarMayor(numerosAleatorios, 15);
    printf("El mayor numero es: %d\n", mayor);
    printf("\n ============= \n");
    mostrarPromedio(numerosAleatorios, 15);
    printf("\n ============= \n");
    incrementarImpares(numerosAleatorios, 15);
    printf("El arreglo con los impares incrementados es: ");
    mostrarArreglo(numerosAleatorios, 15);

    return 0;
}