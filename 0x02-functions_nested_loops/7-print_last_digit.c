#include "main.h"
/**
  * print_last_digit - Entry point.
  * @a: argument that is checked
  * Description: a function that prints the last digit.
  * Return: Always 0 (Success)
  */
int print_last_digit(int a)
{
	int lastdigit = (a % 10);

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar (lastdigit + '0');

	return (0);
}
