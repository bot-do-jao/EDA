#include <stdio.h>
#include <string.h>

int main()
{
    char resposta[4], sim[4] = "sim";
    int triagem = 0, contsim = 0, form = 0;

    while (scanf("%s", resposta) != EOF)
    {
        form++;

        if (strcmp(resposta, sim) == 0)
        {
            contsim++;
        }
        if (form == 10)
        {
            form = 0;

            if (contsim >= 2)
            {
                triagem++;
            }
            contsim = 0;
        }
    }

    printf("%d\n", triagem);
}