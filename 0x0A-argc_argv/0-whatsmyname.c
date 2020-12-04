#include <stdio.h>
/**
 * main - display
 * @argc: variable
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
int p;

	for (p = 0; p < argc; p++)
	printf("%s\n", argv[p]);
	return (0);
}
