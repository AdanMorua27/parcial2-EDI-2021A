#include <stdio.h>

#define RENGLON 4
#define COLUMNA 4

int main()
{
    int matriz[RENGLON][COLUMNA];

    //Llenamos la diagonal principal de la matriz con 1 y lo demas con 0
    for(int i = 0; i < RENGLON; i++)
    {
        for(int j = 0; j < COLUMNA; j++)
        {
            if(i == j)
                matriz[i][j]=1;
            else
                matriz[i][j]=0;
        }
    
    }

    //Imprimimos la matriz
    printf("La matriz de tamaño %d x %d queda de la sig manera: \n", RENGLON, COLUMNA);
    
    for (int i = 0; i < RENGLON; i++)
    {
        for (int j = 0; j < COLUMNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    

    getch();
    return 0;
}