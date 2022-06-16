#include "main.h"
/**
 * rev_string - String in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int lenght = 0;
	char temp;
	int i = 0;
	int middle;

	while (*(s + lenght))
		lenght++;

	middle = lenght % 2 == 0 ? lenght / 2 : lenght / 2 + 1;

	while (middle > i)
	{
		temp = *(s + i);
		*(s + i) = *(s + (lenght - 1 - i));
		*(s + (lenght - 1 - i)) = temp;
		i++;
	}
}
