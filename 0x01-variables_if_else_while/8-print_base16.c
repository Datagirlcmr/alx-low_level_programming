#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int x;
	char alph;

	for (x = 48; x < 58; x++)
		putchar(x);

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
