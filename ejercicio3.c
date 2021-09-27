#include <stdio.h>
#include<stdlib.h>
#include <time.h>

#define RENGLON 5
#define COLUMNA 4


int main()
{
    srand(time(NULL));

    int matrizA[RENGLON][COLUMNA];
    

    //Llenamos la matriz A con numero aleatorios
    for(int i = 0; i < RENGLON; i++)
    {
        for (int j = 0; j < COLUMNA; j++)
        {
            matrizA[i][j] = rand() %  11;
        }
        
    }

    printf("Matriz\n");

    //Imprimimos la matriz A
    for(int i = 0; i < RENGLON; i++)
    {
        for (int j = 0; j < COLUMNA; j++)
        {
            printf("%d ", matrizA[i][j]);
            
        }
        printf("\n");
    }

    printf("Matriz transpuesta\n");

    
    //Imprimimos la matriz A Transpuesta
    for(int i = 0; i < COLUMNA; i++)
    {
        for (int j = 0; j < RENGLON; j++)
        {
            printf("%d ",matrizA[j][i]);
        }
        printf("\n");
    }

    getch();
    return 0;
}