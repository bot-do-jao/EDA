#include <stdio.h>

long int fib[10000] = {0};

long int fibonacci(int n)
{

    if (n == 0 || n == 1 || n == 2)
    {
        return 1;
    }

    if (fib[n] != 0)
    {
        return fib[n];
    }
    else
    {
        fib[n] = fibonacci(n - 2) + fibonacci(n - 1);

        return fib[n];
    }
}
