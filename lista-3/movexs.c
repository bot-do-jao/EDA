#include <stdio.h>
#include <string.h>

void movexs(char *parte)
{

    if (*parte == '\0')
        return;

    if (*parte != 'x')
    {
        printf("%c", *parte);
        movexs(parte + 1);
    }
    if (*parte == 'x')
    {
        movexs(parte + 1);
        printf("%c", *parte);
    }
}

int main()
{
    char texto[100];

    scanf("%s", &texto);

    movexs(texto);
}