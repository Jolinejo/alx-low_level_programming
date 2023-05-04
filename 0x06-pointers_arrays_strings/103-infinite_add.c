#include "main.h"

/**
* infinite_add - Entry point
* Description: to check if letter is uppercase
* @n1: num
* @n2: num
* @r: buff
* @size_r: size
* Return: int
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int rem = 0, i, j, y, sum, len1 = 0, len2 = 0;
for (i = 0; n1[i]; i++)
len1++;
for (i = 0; n2[i]; i++)
len2++;
i = 0, j = len2 - 1, y = len1 - 1;
for (; i < size_r && (j >= 0 || y >= 0); i++, j--, y--)
{
if (j >= 0 && y >= 0)
sum = n1[y] + n2[j] - '0' - '0' + rem;
else if (j >= 0)
sum = n2[j] - '0' + rem;
else if (y >= 0)
sum = n1[y] - '0' + rem;
if (sum >= 10)
{
r[i] = '0' + sum % 10;
rem = sum / 10;
}
else
{
r[i] = sum + '0';
rem = 0;
}
}
if (rem && i < size_r)
{
r[i] = rem + '0';
i = i + 1;
}
if (i == size_r)
return (0);
r[i] = 0;
for (j = 0; j < (i - 1) / 2; j++)
{
int temp = *(r + i - 1 - j);
*(r + i - 1 - j) = *(r + j);
*(r + j) = temp;
}
return (r);
}
