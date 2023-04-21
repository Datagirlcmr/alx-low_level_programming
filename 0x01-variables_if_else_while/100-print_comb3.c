#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x < 57; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x != y && y > x)
			{
				putchar(x);
				putchar(y);
				putchar(',');
			}
		}
	}

	putchar('\n');

	return (0);
}
