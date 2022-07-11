#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
int main(void)
}
int a;
int b;
a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b)
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
