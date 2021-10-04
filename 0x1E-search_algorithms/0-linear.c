#include "search_algos.h"

/**
  * linear_search - searc h
  * @array: array of liner search
  * @size: size of liner search
  * @value: value of liner search
  * Return: always
  */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
