#include <stdio.h>

#define EXCH(a, b) \
    int aux = a;   \
    a = b;         \
    b = aux;

void selectionsort(int *v, int r, int l)
{

    int i,j, minimo;

    for (i = r; i < l; i++)
    {
        minimo = i;
        
        for (j = i + 1; j < l; j++)
        {
            if (v[j] < v[minimo])
            {
                minimo = j;
                
            }
        }
        EXCH(v[i], v[minimo]);
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
    int input[1000];

    while (scanf("%d", &input[contador]) != EOF)
    {
        contador++;
    }

    selectionsort(input, 0, contador);
}