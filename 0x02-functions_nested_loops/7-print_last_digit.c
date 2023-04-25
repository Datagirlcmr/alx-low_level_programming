 #include "main.h"
/**
  * print_last_digit - Entry point.
  * @a: argument that is checked
  * Description: a function that prints the last digit.
  * Return: Always 0 (Success)
  */
int print_last_digit(int a)
{
if (a >= 0 && a <= 9)
return (a);

else
{
return (_abs(a % 10));
}
}
