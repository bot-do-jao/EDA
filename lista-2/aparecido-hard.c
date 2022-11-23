#include <stdio.h>

int main(){

    int numContas, input, output, check = 0;

    scanf("%d\n", &numContas);

    for (int i = 0; i < numContas; i++)
    {
        scanf("%d", &input);

        check = check + input;
    }

    scanf("%d\n", &output);
    

    if(output == check){
        printf("Acertou\n");
    }else{
        printf("Errou\n");
    }


}