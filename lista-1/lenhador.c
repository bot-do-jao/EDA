#include <stdio.h>
#include <string.h>

int ladosPos[501], rodadas, galhos, coeficiente = 0;
char lado, lados[501], matrix[1005][14];

int criarTronco()
{
    int i, j, numLoop;

    for (i = 0; i < rodadas + 5; i++)
    {
        for (j = 0; j < 11; j++)
        {
            if (i < rodadas)
            {
                if (j == 4 || j == 5 || j == 6)
                {
                    matrix[i][j] = '|';
                }
                else
                {
                    matrix[i][j] = ' ';
                }
            }
            else
            {
                matrix[i][j] = ' ';
            }
        }
    }
};

int verificarGalhos()
{
    int i, j;
    for (i = 0; i < galhos; i++)
    {
        j = ladosPos[i] - 1;
        if (lados[i] == 'D')
        {
            matrix[j][8] = '-';
            matrix[j][9] = '-';
            matrix[j][10] = '-';
        }
        if (lados[i] == 'E')
        {
            matrix[j][1] = '-';
            matrix[j][2] = '-';
            matrix[j][3] = '-';
        }
    }
};

int posicionarLenhador()
{
    if (lado == 'D')
    {
        matrix[coeficiente][8] = 'L';
        matrix[coeficiente + 1][8] = 'L';
    }
    if (lado == 'E')
    {
        matrix[coeficiente][2] = 'L';
        matrix[coeficiente + 1][2] = 'L';
    }
};

int bater()
{
    if (verificarMorte())
    {
        printf("**morreu**\n");
        return 1;
    }

    if ((matrix[coeficiente][4] == '>' && lado == 'E') || (matrix[coeficiente][6] == '<' && lado == 'D'))
    {
        coeficiente++;
        posicionarLenhador();
        return 0;
    }

    if (matrix[coeficiente][4] == '|' && lado == 'E')
    {
        matrix[coeficiente][4] = '>';
        return 0;
    }

    if (matrix[coeficiente][6] == '|' && lado == 'D')
    {
        matrix[coeficiente][6] = '<';
        return 0;
    }
};

int verificarMorte()
{
    if (lado == 'E' && matrix[coeficiente + 2][2] == '-' && matrix[coeficiente][4] == '>')
    {
        return 1;
    }
    if (lado == 'D' && matrix[coeficiente + 2][8] == '-' && matrix[coeficiente][6] == '<')
    {
        return 1;
    }
    return 0;
};

int trocarLado()
{
    if (lado == 'D')
    {
        if (matrix[coeficiente][2] == '-' || matrix[coeficiente + 1][2] == '-')
        {
            printf("**beep**\n");
            return 1;
        }
        matrix[coeficiente][2] = 'L';
        matrix[coeficiente + 1][2] = 'L';
        matrix[coeficiente][8] = ' ';
        matrix[coeficiente + 1][8] = ' ';
        lado = 'E';
        return 0;
    }
    if (lado == 'E')
    {
        if (matrix[coeficiente][8] == '-' || matrix[coeficiente + 1][8] == '-')
        {
            printf("**beep**\n");
            return 1;
        }

        matrix[coeficiente][2] = ' ';
        matrix[coeficiente + 1][2] = ' ';
        matrix[coeficiente][8] = 'L';
        matrix[coeficiente + 1][8] = 'L';
        lado = 'D';
        return 0;
    }
};
void printTronco()
{
    int i, j;

    printf("~~~~~~~~~~~\n");

    for (i = 4 + coeficiente; i >= coeficiente; i--)
    {
        for (j = 0; j < 11; j++)
        {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("~~~~~~~~~~~\n");
};

int main()
{
    int aviso;
    char auxiliar;
    char command[2004];

    scanf("%d", &rodadas);
    scanf("%d", &galhos);

    for (int i = 0; i < galhos; i++)
    {
        scanf(" %c", &auxiliar);
        scanf("%d", &ladosPos[i]);
        lados[i] = auxiliar;
    }

    scanf(" %c", &lado);
    scanf("%s", command);

    criarTronco();
    verificarGalhos();
    posicionarLenhador();
    printTronco();

    for (int j = 0; j < strlen(command); j++)
    {
        if (command[j] == 'T')
        {
            if (trocarLado())
            {
                continue;
            }
            else
            {
                printTronco();
            }
        }
        if (command[j] == 'B')
        {
            aviso = bater();
            if (aviso == 1)
            {
                break;
            }
            printTronco();
        }
    }
}
