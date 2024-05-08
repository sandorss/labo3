//Labo4, punto 4

//Contar caracteres

#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[20];
    int vocales = 0, consonantes = 0, digitos = 0;
    
    // Solicitar al usuario que ingrese una cadena de texto
    printf("Ingrese una cadena de texto (menos de 20 caracteres): ");
    scanf("%s", cadena);

    // Iterar sobre cada carácter de la cadena
    for (int i = 0; cadena[i] != '\0'; i++) {
        char caracter = tolower(cadena[i]); // Convertir el carácter a minúscula para simplificar la comparación

        // Verificar si el carácter es una vocal
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            vocales++;
        }
        // Verificar si el carácter es una consonante
        else if ((caracter >= 'a' && caracter <= 'z') && !isdigit(caracter)) {
            consonantes++;
        }
        // Verificar si el carácter es un dígito
        else if (isdigit(caracter)) {
            digitos++;
        }
    }

    // Imprimir los resultados
    printf("Cantidad de vocales: %d\n", vocales);
    printf("Cantidad de consonantes: %d\n", consonantes);
    printf("Cantidad de dígitos: %d\n", digitos);

    return 0;
}

