#include "main.h"

/**
* time_teble -prints tables
*
* Return: Always 0.
*/
int main(void)
{
	times_table();
	return (0);
void time_teble(void)
{
int a;
int b;
int c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if ((c / 10) == 0)
{
if (b == 0)
{
_putchar ('0');
}
if (b != 0)
{
_putchar (' ');
_putchar ((c % 10) + '0');
}
if (b < 9)
{
_putchar(',');
_putchar (' ');
}
}
else
{
_putchar ((c / 10) + '0');
_putchar ((c % 10) + '0');
if (b < 9)
{
_putchar(',');
_putchar (' ');
}
}
}
_putchar ('\n');
}
}
