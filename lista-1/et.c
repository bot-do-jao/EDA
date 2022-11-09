#include <stdio.h>
#include <string.h>

int main()
{
    char input[30], marte[30] = "marte";
    int temMarte = 0;

    scanf("%s", input);

    while (scanf("%s", input) != EOF)
    {
        if (strcmp(input, marte) == 0)
        {
            temMarte = 1;
        }
    }

    if (temMarte == 1)
    {
        printf("Leonardo Cicero Marciano\n");
    }
    else
    {
        printf("none\n");
    }
}