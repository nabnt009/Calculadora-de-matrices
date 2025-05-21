//Producto punto entre dos vectores
#include <stdio.h>
#define max 30

//Declaracion de variable "i", para las funciones 
int i;

//Función que escanea y guarda un valor n entero, y lo retorna
int Damenumero()
	{
		int n;
		scanf("%i",&n);
		return n;
	}
//Función que lee las componentes de los vectores
void componentes(float array[],int comp)
    {
        for(i=0;i<comp;i++)
        {
            scanf("%f", &array[i]);
        }
    }
//Función que imprime cada componente de los vectores
void imprVec(float array[],int vector)
    {
        for(i=0;i<vector;i++)
        {
            printf("%.1f   ",array[i]);
        }
        printf("\n"); 
    }
//Función que realiza el producto punto y lo devuelve como suma
float prodpunt(float vec1[],float vec2[],int n)
    {
        float suma;
        suma=0; //acumulador
        
        for(i=0;i<n;i++)
        {
            suma=suma+(vec1[i]*vec2[i]);
        }
        return suma;
    }
//Función principal
int main()
{
    int n;
    float v1[max]; 
    float v2[max];
    float ProductoPunto;

    printf("\nIngresa la dimensión de los vectores \n");
    n=Damenumero(); //n es igual a lo que hace la función "Damenumero"
    
    printf("\nIngresa los componentes de tu primer vector \n");
    componentes(v1,n); //Los componentes se guardan gracias a la función "componentes"
    
    printf("\nIngresa los componentes de tu segundo vector \n");
    componentes(v2,n);
    
    printf("\nVector 1:\n");
    imprVec(v1,n); //"imprVec", escribe el vector ingresado por el usuario gracias a la función
    
    printf("\nVector 2:\n");
    imprVec(v2,n);
    
    ProductoPunto=prodpunt(v1,v2,n); //Es el valor "suma" que retorna la función "prodpunt"
    printf("\nEl producto punto entre los vectores es:\n %.1f \n",ProductoPunto);
    
    return 0;
}
