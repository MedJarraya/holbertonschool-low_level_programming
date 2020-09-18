#include <stdio.h>
/**
 * main - Hexadecimal
 * Return:0
 */

int main(void)
{
int num = 0;
char alpha = 'a';

while (num < 10)
{
putchar (num + '0');
num++;
}
while (alpha <= 'f')
{
putchar (alpha);
alpha++;
}
putchar ('\n');
return (0);
}
