#include "search_algos.h"

/**
 * print_array - print
 *
 * @array: arr
 * @first: first
 * @last: last
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t k;

	printf("Searching in array: ");
	for (k = first; k <= last; k++)
	{
		if (k != first)
			printf(", ");
		printf("%d", array[k]);
	}
	printf("\n");
}

/**
   * binary_search - searc h
  * @array: arr
  * @size: size
  * @value: val
  * Return: always
 */

int binary_search(int *array, size_t size, int value)
{
	size_t k = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			k = (first + last) / 2;

			if (value > array[k])
				first = k + 1;
			else if (value < array[k])
				last = k - 1;
			else
				return (k);
		}
	}

	return (-1);
}
