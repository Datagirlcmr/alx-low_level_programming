#include <stdio.h>
/**
  *main - Main Entry
  *Return: Return 0 (success)
    */
int main(void)
{
	charalphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar("\n");
	return (0);
}
