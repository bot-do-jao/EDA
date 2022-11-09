#include <stdio.h>

int encontraChar(char *texto)
{
    int i, contador = 0;

    for (i = 0; i < 1004; i++)
    {
        if (texto[i] != '\0')
        {
            contador++;
        }
        else
        {
            return contador;
        }
    }
}

int main()
{
    int linhas, col1, lin1, resultadoL, resultadoC, pont;
    char x;
    char texto[1005][1005];

    scanf("%d", &linhas);

    for (int k = 1; k <= linhas; k++)
    {
        scanf(" %1000[^\n]s", texto[k]);
    }

    scanf("%d %d", &lin1, &col1);
    resultadoL = lin1;
    resultadoC = col1;

    while (scanf("\n%c", &x) != EOF)
    {

        if (x == 'j')
        {
            if ((resultadoL + 1) <= linhas)
            {
                resultadoL = resultadoL + 1;

                pont = encontraChar(texto[resultadoL]);

                //  5      >    8

                if ((resultadoC > pont) || (resultadoC < pont && pont < col1))
                {
                    resultadoC = pont;
                }
                else
                {
                    resultadoC = col1;
                }
            }
        }

        if (x == 'k')
        {

            if (resultadoL > 1)
            {
                resultadoL = resultadoL - 1;

                pont = encontraChar(texto[resultadoL]);

                if (resultadoC > pont || (resultadoC < pont && pont < col1))
                {
                    resultadoC = pont;
                }
                else
                {
                    resultadoC = col1;
                }
            }
        }
        
        printf("%d %d %c\n", resultadoL, resultadoC, texto[resultadoL][resultadoC - 1]);
    }

    
}