#include <stdio.h>

/**
  * main - print
  * Return: 0
 **/
int main(void)
{
	int z;

	for (z = 1; z <= 100; z++)
	{
		if (z % 5 == 0 && z % 3 == 0)
			printf("FizzBuzz ");
		else if (z % 3 == 0)
			printf("Fizz ");
		else if (z % 5 == 0)
		{
			printf("Buzz");
			if (z != 100)
			printf(" ");
		}
		else
			printf("%d ", z);
		if (z == 100)
			printf("\n");
	}
	return (0);
}
