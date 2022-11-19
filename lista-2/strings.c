#include <stdio.h>

int main()
{
    int entrada;

    while (scanf("%x", &entrada) != EOF)
    {
        char *parte = &entrada;

        for (int i = 0; i < 4; i++)
        {
            if (parte[i] == 0)
            {
                printf("\n");
                return 0;
            }
            printf("%c", (char)parte[i]);
        }
    }
}