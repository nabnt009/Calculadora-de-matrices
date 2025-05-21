/* vector por un escalar */

#include <stdio.h>

int main() {
    float vector[3];  // Array que almacena el vector
    float escalar;    // Variable para el escalar
    float resultado[3]; // Array para el resultado
    
    // Pedir los valores del vector
    printf("Introduce los 3 valores del vector:\n");
    printf("Valor 1: ");
    scanf("%f", &vector[0]);
    printf("Valor 2: ");
    scanf("%f", &vector[1]);
    printf("Valor 3: ");
    scanf("%f", &vector[2]);
    
    // Pedir el valor escalar
    printf("Introduce el valor del escalar: ");
    scanf("%f", &escalar);
    
    // Multiplicación
    resultado[0] = vector[0] * escalar;
    resultado[1] = vector[1] * escalar;
    resultado[2] = vector[2] * escalar;
    
    // Mostrar el resultado
    printf("\nResultado de la multiplicacion:\n");
    printf("[%.2f, %.2f, %.2f] * %.2f = [%.2f, %.2f, %.2f]\n",
           vector[0], vector[1], vector[2],
           escalar,
           resultado[0], resultado[1], resultado[2]);
    
    return 0;
}