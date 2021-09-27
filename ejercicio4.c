#include <stdio.h>

#define MAXTAM 15

typedef int Matriz[MAXTAM][MAXTAM];

void iniciaMatriz(Matriz a, int ren, int col);
void buscaMayor(Matriz a, int ren, int col);

int main()
{   
    Matriz a;

    int renglones, columnas;

    printf("¿Cuantos renglones quieres?: ");
    scanf("%d", &renglones);

    printf("¿Cuantos columnas quieres?: ");
    scanf("%d", &columnas);
    
    iniciaMatriz(a, renglones, columnas);
    buscaMayor(a, renglones, columnas);


    getch();
    return 0;
}

void iniciaMatriz(Matriz a, int ren, int col)
{

    for(int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Dame el valor para %d,%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }
}

void buscaMayor(Matriz a, int ren, int col)
{   

    int mayor = 0, p1, p2;

    for(int i = 0; i < ren; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j] > mayor)
            {
                mayor = a[i][j];
                p1 = i, p2 = j;
            }
                
        }
        
    }
    printf("El numero mayor es %d en la posicion [%d][%d]", mayor, p1, p2);
}
