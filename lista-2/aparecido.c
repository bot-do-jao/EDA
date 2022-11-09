#include <stdio.h>

int main(){

    int input1, input2, input3, output, check;

    scanf("%d %d %d\n", &input1, &input2, &input3);
    scanf("%d\n", &output);

    check = input1 + input2 + input3;

    if(output == check){
        printf("Acertou\n");
    }else{
        printf("Errou\n");
    }


}