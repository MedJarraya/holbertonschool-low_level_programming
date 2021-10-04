#include "search_algos.h"

/**
 * print_array - print
 *
 * @array: array
 * @first: first
 * @last: last
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t x;

	printf("Searching in array: ");
	for (x = first; x <= last; x++)
	{
		if (x != first)
			printf(", ");
		printf("%d", array[x]);
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
	size_t x = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			x = (first + last) / 2;

			if (value > array[x])
				first = x + 1;
			else if (value < array[x])
				last = x - 1;
			else
				return (x);
		}
	}

	return (-1);
}
