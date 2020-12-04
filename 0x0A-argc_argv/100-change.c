#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - argv display
 * @argc: var
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int change, pieces = 0, p;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change <= 0)
	{
		printf("0\n");
		return (1);
	}
	for (p = 0; change != 0; p++)
	{
		pieces = pieces + (change / coins[p]);
		change = change % coins[p];
	}
	printf("%d\n", pieces);
	return (0);
}
