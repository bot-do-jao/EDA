#include <stdio.h>

int main(){
    int numJogos, joaozin, zezin, contador = 1;

    scanf("%d", &numJogos);
    while(numJogos != 0){
        int diferenca[numJogos+1];
        diferenca[0] = 0;
        for(int i = 1; i < numJogos+1; i++){
            scanf("%d %d", &joaozin, &zezin);
            diferenca[i] = joaozin - zezin + diferenca[i-1];

        }

        printf("Teste %d\n", contador);

        for(int i = 1; i < numJogos+1; i++)
        {
            printf("%d\n", diferenca[i]);
        }

        printf("\n");

        contador++;

        scanf("%d", &numJogos);
    }
}