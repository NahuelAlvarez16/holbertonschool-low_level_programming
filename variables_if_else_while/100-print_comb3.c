#include <stdio.h>
/**
 * main - Print digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dozen;

	for (dozen = 0; dozen <= 9; dozen++)
	{
		int unit;

		for (unit = 0; unit <= 9; unit++)
		{
			if (unit > dozen)
			{
				if (unit > 1 || dozen > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(dozen % 10 + '0');
				putchar(unit % 10 + '0');
			}
		}
	}
	printf("\n");
	return (0);
}
