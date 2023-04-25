#include "main.h"
/**
  * print_last_digit - Entry point.
  * @a: argument that is checked
  * Description: a function that prints the last digit.
  * Return: Always 0 (Success)
  */
int print_last_digit(int a)
{
	int lastDigit;

	lastDigit = a % 10;
	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar (lastDigit + '0');
	return (lastDigit);
}
