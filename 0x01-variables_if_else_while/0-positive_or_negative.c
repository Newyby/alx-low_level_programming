#include <stdlibh.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print if number is positive, zero or negative
 * Return: (Success)
*
*/

int main(void)
{
Int n;

Srand(time(0));
n = rand() - RAND - MAX / 2;

If(n > 0)
{
Print f("%d is positive\n", n);
}
else if (n == 0)
i{
Print f("%d is zero\n", n);
}
else
{
Print f("%d is negative\n", n);
}
return (0);
}
