#include <stdio.h>
#include <string.h>

void movexs(char *parte)
{

    if (*parte == '\0')return;

    movexs(parte + 1);
    printf("%c", *parte);
    
    
    
}

int main()
{
    char texto[500];
    

    scanf("%s", texto);

    movexs(texto);
}