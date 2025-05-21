/**/

#include <stdio.h>
#define MAX_DIM 30  // Tamaño máximo permitido para los vectores

// Prototipos de funciones
int obtenerDimension();
void rellenarVector(float vector[], int dimension);
void multiplicarPorEscalar(float resultado[], float vector[], float escalar, int dimension);
void mostrarVector(float vector[], int dimension);

int main() {
    int dimension;
    float escalar;

    printf("Ingresa la dimension de tu vector (maximo %d):\n", MAX_DIM);
    dimension = obtenerDimension();

    float vector[dimension], resultado[dimension];

    printf("Ingresa los valores del vector:\n");
    rellenarVector(vector, dimension);

    printf("Ingresa el valor del escalar: ");
    scanf("%f", &escalar);

    multiplicarPorEscalar(resultado, vector, escalar, dimension);

    printf("\nEl vector resultante de la multiplicacion es:\n");
    mostrarVector(resultado, dimension);

    return 0;
}

// Función para obtener y validar la dimensión del vector
int obtenerDimension() {
    int dim;
    do {
        printf("Dimension: ");
        scanf("%d", &dim);
        if (dim <= 0 || dim > MAX_DIM) {
            printf("Error: La dimension debe ser positiva y menor o igual a %d.\n", MAX_DIM);
        }
    } while (dim <= 0 || dim > MAX_DIM);
    return dim;
}

// Función para rellenar un vector con valores ingresados por el usuario
void rellenarVector(float vector[], int dimension) {
    printf("Ingresa las componentes del vector:\n");
    for (int i = 0; i < dimension; i++) {
        printf("Componente %d: ", i + 1);
        scanf("%f", &vector[i]);
    }
}

// Función para multiplicar un vector por un escalar
void multiplicarPorEscalar(float resultado[], float vector[], float escalar, int dimension) {
    for (int i = 0; i < dimension; i++) {
        resultado[i] = vector[i] * escalar;
    }
}

// Función para mostrar un vector en formato [x, y, z]
void mostrarVector(float vector[], int dimension) {
    printf("[");
    for (int i = 0; i < dimension; i++) {
        printf("%.2f", vector[i]);
        if (i < dimension - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}