#include <stdio.h>
#include <string.h>

int main()
{
    int numJogos, contA = 0, contB = 0, contador = 0;
    int resA[100], resB[100], indice = 0;
    char result[20000];

    do
    {
        scanf("%d", &numJogos);

        for (int i = 0; i < numJogos; i++)
        {
            scanf("%s", &result[i]);
            if (result[i] == '0')
            {
                contA++;
            }

            if (result[i] == '1')
            {
                contB++;
            }
        }

        contador++;

        resA[indice] = contA;

        resB[indice] = contB;

        contA = contB = 0;

        indice++;
        
    } while (numJogos != 0);

    for (int j = 0; j < (contador - 1); j++)
    {
        printf("Alice ganhou %d e Beto ganhou %d\n", resA[j], resB[j]);
    }
}