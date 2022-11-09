#include <stdio.h>

int main()
{
    int n, x, soma = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &x);
        soma = soma + x;
    }

    printf("%d\n", soma);
}