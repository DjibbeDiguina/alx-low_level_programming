#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9_times table, startinng with_0
 *
 * Return: always 0
 */

void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (j == 0)
{
printf("%2d", result);
}
else
{
printf(",%2d", result);
}
}
printf("\n");
}
}
