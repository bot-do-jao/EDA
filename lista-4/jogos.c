#include <stdio.h>

int main()
{
    char times[11];
    int time, numJogos, *results, somaPontos;

    while (scanf("%d %d", &time, &numJogos))
    {
        if (time == 0)
            break;

        somaPontos = 0;
        results = malloc(time * sizeof(int));
        for (int i = 0; i < time; i++)
        {
            scanf("%s %d", times, &results[i]);
            somaPontos = somaPontos + results[i];
        }

        printf("%d\n", (numJogos * 3) - somaPontos);

    }
}