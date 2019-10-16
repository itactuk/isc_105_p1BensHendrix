#include <stdio.h>
#define N 3
#define M 4

#define CANTIDAD_MAXIMA_RESULTADOS 100

typedef struct indices{
    int x;
    int y;
} INDICES;

typedef struct resultados{
    INDICES indices[CANTIDAD_MAXIMA_RESULTADOS];
    int cantidad_resultados_indices;
} RESULTADOS;

RESULTADOS puntos_de_sillap(int mat[N][M], int posFil, int posCol);

int puntoSilla(int mat[N][M], int posFil, int posCol);
void escribeMat(int mat[N][M]);

int main()
{
    int mat[N][M] = {
        3, 4, 5, 3,
        2, 3, 2, 2,
        1, 2, 0, 1  };
    int posFil=2, posCol=1;

    printf("\n");

    escribeMat(mat);


    for (posFil = 0; posFil < N; posFil++)
        for (posCol = 0; posCol < M; posCol++)
            if(puntoSilla(mat, posFil, posCol)==1)
                printf("Tiene punto de silla en la posicion %d-%d\n", posFil, posCol);
            else
                printf("No hay punto de silla en la posicion %d-%d\n", posFil, posCol);

    return 0;
}


int puntoSilla(int mat[N][M], int posFil, int posCol)
{
    int i, j, nohay=1;

    for(i=0; i<N && nohay; i++)
    {
        for(j=0; j<M && nohay; j++)
        {
            if(mat[posFil][posCol]>mat[posFil][j] || mat[posFil][posCol]<mat[i][posCol]) {
                nohay=0;
            }
        }
    }

    return nohay;
}

void escribeMat(int mat[N][M])
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}
