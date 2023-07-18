#include <stdio.h>

/**
 * main - prints different combination of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a < '8' || b < '9')
			{
				putchar(',');
				putchar(' ');
			}

		}

	}

	putchar('\n');

	return (0);

}
