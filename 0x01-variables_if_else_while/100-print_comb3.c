#include <stdio.h>
/**
 * main - combination
 * Return:0
 */

int main(void)
{
int num = 0;

while (num < 100)
{
if ((num % 10) > (num / 10))
{
putchar(num / 10 + '0');
putchar(num % 10 + '0');
if (num != 89)
{
putchar(',');
putchar(' ');
}
}
num++;
}
putchar('\n');
return (0);
}
