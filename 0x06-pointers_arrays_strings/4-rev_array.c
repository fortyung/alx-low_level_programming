#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
	int tep, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		tep = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tep;
		beg++, end--;
	}
}
