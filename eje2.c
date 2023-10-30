#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    //Declaro el arreglo
    char contrasenia[20], repetirContra[20];
    int tieneMayus = 0, tieneMinus=0, tieneNumero=0;
    //Solicito al usuario la contraseña
    printf("Ingrese una contraseña: \n");
    fflush(stdin);
    gets(contrasenia);

    //Vrifico la longitud
    if(strlen(contrasenia)<8){
        printf("La contraseña ingresada debe tener 8 o mas caracteres\n");
        return 0;
    }
    for (int i = 0; i < strlen(contrasenia); i++)
    {
        if(isupper(contrasenia[i])){
            tieneMayus = 1;     
        }
        if(islower(contrasenia[i])){
            tieneMinus = 1;
        }
        if(isdigit(contrasenia[i])){
            tieneNumero = 1;
        }
    }
    if(tieneMayus != 1 || tieneMinus != 1 || tieneNumero != 1){
        printf("Debe contener al menos un caracter en minuscula, mayuscula y un digito\n");
        return 0;
    }else{
        printf("Repita la contraseña: \n");
        fflush(stdin);
        gets(repetirContra);
        if(strcmp(contrasenia, repetirContra) == 0){
            printf("Contraseña valida\n");
            return 0;
        }else{
            printf("Las contraseñas no coinciden\n");
            return 0;
        }
    }
    return 0;
}