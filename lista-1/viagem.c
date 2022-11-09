#include <stdio.h>
#include <string.h>

int main()
{

    int nota, numRes, contaDia = 0;
    long int restaurante;

    while (scanf("%d", &numRes) != EOF)
    {

        long int menorRes = 999999999;
        int melhorNota = 0;

        contaDia++;

        for (int i = 0; i < numRes; i++)
        {
            scanf("%ld %d", &restaurante, &nota);

            if (nota > melhorNota)
            {
                melhorNota = nota;
                menorRes = restaurante;
            }

            if ((melhorNota == nota) && (menorRes > restaurante))
            {
                menorRes = restaurante;
            }
        }

        printf("Dia %d\n", contaDia);
        printf("%ld\n", menorRes);
        printf("\n");
    }
}