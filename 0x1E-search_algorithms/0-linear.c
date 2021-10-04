#include "search_algos.h"

/**
  * linear_search - searc h
  * @array: array
  * @size: size
  * @value: value
  * Return: always
  */

int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}

	return (-1);
}
