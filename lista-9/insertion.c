#include <stdio.h>

#define EXCH(a, b) \
    int auxi = a;  \
    a = b;         \
    b = auxi;

void insertionsort(int *v, int r, int l)
{

    int i, j;

    for (i = l - 1; i > r; i--)
    {
        if (v[i] < v[i - 1])
        {
            EXCH(v[i - 1], v[i]);
        }
    }

    for (j = r + 2; j < l; j++)
    {
        int aux = j;
        int mao = v[aux];

        while (mao < v[aux - 1])
        {
            v[aux] = v[aux - 1];
            aux--;
        }
        v[aux] = mao;
    }

    for (int k = r; k < l; k++)
    {
        printf("%d ", v[k]);
    }
    printf("\n");
}

int main()
{
    int contador = 0;
    int input[50000];

    while (scanf("%d", &input[contador]) != EOF)
    {
        contador++;
    }

    insertionsort(input, 0, contador);
}