#include <stdio.h>


int main()
{
    int numdepositos, contador = 1, resultParcial = 0;
    int results[400];
    int joao[200], zezin[200];

    scanf("%d", &numdepositos);

    while (numdepositos != 0)
    {

        for (int i = 0; i < (numdepositos); i++)
        {
            scanf("%d %d", &joao[i], &zezin[i]);

            resultParcial = joao[i] - zezin[i] + resultParcial;

            results[i] = resultParcial;
        }

        printf("Teste %d\n", contador);

        for (int i = 0; i < numdepositos; i++)
        {
            printf("%d\n", results[i]);
        }
        printf("\n");

        contador++;
    }
}