#include "main.h"
/**
  * print_sign - Entry point.
  * @n: argument that is checked
  * Description: a function that prints the sign of a number.
  * Return: Always 0 (Success)
  */
int print_sign(int n)
{
int test;

if (n > 0)
{
test = 1;
_putchar('+');
}
else if (n == 0)
{
test = 0;
_putchar('0');
}
else
{
test = -1;
_putchar('-');
}
return (test);
}
