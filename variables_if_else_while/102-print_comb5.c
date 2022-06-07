#include <stdio.h>
/**
 * main - Print digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int contador = 0;
	int thousand;

	for (thousand = 0; thousand <= 9; thousand++)
	{
		int hundred;

		for (hundred = 0; hundred <= 9; hundred++)
		{
			int dozen;

			for (dozen = 0; dozen <= 9; dozen++)
			{
				int unit;

				for (unit = 0; unit <= 9; unit++)
				{
					if (((dozen * 10) + unit) > ((thousand * 10) + hundred))
					{
					if (contador > 0)
					{
					putchar(',');
					putchar(' ');
					}
					++contador;
					putchar(thousand % 10 + '0');
					putchar(hundred % 10 + '0');
					putchar(' ');
					putchar(dozen % 10 + '0');
					putchar(unit % 10 + '0');
					}
				}
			}
		}
	}
	printf("\n");
	return (0);
}
