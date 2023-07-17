#include <stdio.h>

/**
 * main - prints all single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar ('\n');

	return (0);
}
