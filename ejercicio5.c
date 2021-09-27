#include <stdio.h>

#define MAXTAM 15

typedef int Matriz[MAXTAM][MAXTAM];

int main()
{
    Matriz a;
    int tam;
    int bandera = 1;


    printf("Dame el tamaño de la matriz: ");
    scanf("%d", &tam);

    //Inicializamos la matriz
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            printf("Dame el valor para %d,%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //Comparamos la matriz con la matriz transpuesta;
    for(int i = 0; i < tam; i++)
    {
        for(int j = 0; j < tam; j++)
        {
            if(a[i][j] != a[j][i])
                bandera = 0;
        }
    }

    if(bandera == 1)
        printf("La matriz es simetrica");
    else
        printf("La matriz no es simetrica");

    getch();
    return 0;
}