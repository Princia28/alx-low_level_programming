#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: 0 for success
 */
int main(void)
{
char num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
