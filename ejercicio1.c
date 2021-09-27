#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 3

void genera(int A[N][M]);
void imprimearrbi(int A[N][M]);
void prom(int A[N][M], float B[N]);
void imprimearr(float A[N]);

int main()
{
    int A[N][M];
    float B[N];
    srand(time(0));
    genera(A);
    imprimearrbi(A);
    prom(A,B);
    printf("\n");
    imprimearr(B);
}
void genera(int A[N][M])
{
    int ren, col;
    for(ren=0; ren<N; ren++)
    {
        for(col=0; col<M; col++)
        {
            A[ren][col]= rand()%9;
        }
    }
}

void imprimearrbi(int A[N][M])
{
    int i, j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("\t%i",A[i][j]);
        }
        printf("\n");
    }
}

void prom(int A[N][M], float B[N])
{
    int i, j;
    float p;
    for(i=0; i<M; i++)
    {
        p = 0;
        for(j=0; j<N; j++)
        {
            p = (A[j][i]) + p;
        }
        p=p/N;
        B[i] = p;
    }
}
void imprimearr(float A[N])
{
    int i;
    for(i=0; i<N; i++)
    {
            printf("\t%.1f",A[i]);
    }
}
