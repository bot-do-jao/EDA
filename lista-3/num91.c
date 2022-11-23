#include <stdio.h>

int f91(int x){

    if(x >= 101){
        return x - 10;
    }

    if(x <= 100){
        return f91(f91(x + 11));
    }

}

int main(){

    int input = 1;

    while (input != 0)
    {
        scanf("%d", &input);
        printf("\n");
        if (input != 0)
        {
            printf("f91(%d) = %d\n", input, f91(input));
        }
        

    }
    
}