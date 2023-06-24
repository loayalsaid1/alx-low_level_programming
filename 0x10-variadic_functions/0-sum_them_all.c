#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
        unsigned int i , sum = 0;
        va_list ap;

        if (n == 0)
                return (0);
        
        va_start(ap, n);
        for (i = 0; i < n; i++)
        {
                sum += va_arg(ap, int);
        }
        va_end(ap);

        return (sum);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}