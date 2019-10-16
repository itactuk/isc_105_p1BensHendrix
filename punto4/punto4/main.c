#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define CANTIDAD_NUMEROS 10
//variables globales
int i,j;
//funciones
int busqueda_binaria(int[]);
void datos(int[]);

int main()
{
  int productos[CANTIDAD_NUMEROS];
    printf("Ingrese los 10 valores ");
    printf("\n\n");
        for(i=0;i<CANTIDAD_NUMEROS;i++)
        {
            printf("Ingrese el valor numero %d ",i+1);
            scanf("%d",&productos[i]);
        }
    printf("\n\n");
    datos(productos);
    busqueda_binaria(productos);

    return 0;
}

int busqueda_binaria(int arreglo[])
{
    int busqueda, izquierda = 0, derecha = CANTIDAD_NUMEROS;

        printf("numero de busqueda: "); scanf("%d",&busqueda);

        if (izquierda > derecha) return -1;

    int indiceDeLaMitad = floor((izquierda + derecha) / 2);

    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
        if (busqueda == valorQueEstaEnElMedio){
            return indiceDeLaMitad;
        }

        if (busqueda < valorQueEstaEnElMedio){
            // Entonces está hacia la izquierda
            derecha = indiceDeLaMitad - 1;
        }else{
            // Está hacia la derecha
            izquierda = indiceDeLaMitad + 1;
        }
    return busqueda_binaria(arreglo);


}

void datos(int arreglo[])
{

    int buscador,limite_infer,limite_super;
        printf("Cual es el numero que desea buscar: "); scanf("%d",&buscador);
            for(i=0;i<1;i++)
            {
                limite_infer = arreglo[i];
                limite_super = arreglo[i+CANTIDAD_NUMEROS-1];
            }
    printf("El numero que se desea buscar es: %d",buscador);
    printf("\nEl limite inferior de los elementos es: %d",limite_infer);
    printf("\nEl limite superior de los elementos es: %d",limite_super);

}
