#include <stdio.h>

#define EXCH(a, b)\
	int aux = a;\
	a = b;\
	b = aux

void bubblesort(int* v, int r, int l){

	for (int i = r; i < l; i++)
	{
		for (int j = i + 1; j < l; j++)
		{
			if (v[i] > v[j])
			{
				EXCH(v[j], v[i]);
			}
			
		}
		
	}
	
	for (int k = r; k < l; k++)
	{
		printf("%d ", v[k]);
	}
	printf("\n");

}

int main()
{
    int contador = 0;
    int input[1000];

    while (scanf("%d", &input[contador]) != EOF)
    {
        contador++;
    }

    bubblesort(input,0, contador);

    
}