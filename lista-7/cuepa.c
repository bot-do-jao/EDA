#include <stdio.h>

int main()
{
    char quartas[8], semi[4], final[2], vencedor;
    int jogo1, jogo2;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d %d", &jogo1, &jogo2);
        if (jogo1 > jogo2)
        {
            quartas[i] = (char)65 + (2 * i);
        }
        else
        {
            quartas[i] = (char)65 + (2 * i) + 1;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &jogo1, &jogo2);
        if (jogo1 > jogo2)
        {
            semi[i] = quartas[2 * i];
        }
        else
        {
            semi[i] = quartas[2 * i + 1];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d", &jogo1, &jogo2);
        if (jogo1 > jogo2)
        {
            final[i] = semi[2 * i];
        }
        else
        {
            final[i] = semi[2 * i + 1];
        }
    }

    scanf("%d %d", &jogo1, &jogo2);
    if (jogo1 > jogo2)
    {
        vencedor = final[0];
    }
    else
    {
        vencedor = final[1];
    }
    printf("%c", vencedor);
}