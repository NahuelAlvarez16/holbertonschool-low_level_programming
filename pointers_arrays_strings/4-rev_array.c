#include "main.h"
/**
 * reverse_array - Int in reverse
 * @s: string
 * @n: limit
 */
void reverse_array(int *a, int n)
{
	int lenght = 0;
	char temp;
	int i = 0;
	int middle;

	while (*(a + lenght))
		lenght++;

	middle = lenght % 2 == 0 ? lenght / 2 : lenght / 2 + 1;

	while (middle > i)
	{
		temp = *(a + i);
		*(a + i) = *(a + (lenght - 1 - i));
		*(a + (lenght - 1 - i)) = temp;
		i++;
	}

}
