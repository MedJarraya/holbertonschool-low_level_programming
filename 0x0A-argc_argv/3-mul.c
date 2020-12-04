#include <stdio.h>
#include <stdlib.h>
/**
 * main - argv display
 * @argc: var
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1, ar;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			ar = atoi(argv[i]);
			mul *= ar;
		}
		printf("%d\n", mul);
	}
	else
	printf("Error\n");
	return (0);
}
