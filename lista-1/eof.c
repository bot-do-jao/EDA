#include <stdio.h>

int main()
{

    int num, contador = 1;

    scanf("%d", &num);

    while (scanf("%d", &num) != EOF)
    {
        contador++;
    }

    printf("%d", contador);
}