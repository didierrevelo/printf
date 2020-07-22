#include "holberton.h"
/**
 * p_number - print numbers
 * @lisa: arguments
 * Return: print numbers
 */
int p_number(va_list lisa)
{
int a, b= 1, c = 0;
unsigned int bers;

a = va_arg(lisa, int);

if (a < 0)
{
c += _put_char('-');
bers = a * -1;
}
else
{
bers = a;
}

while (bers / b > 9)
b *= 10;

while (b != 0)
{
c += _put_char('0' + bers / b);
bers %= b;
b /= 10;
}
return (c);
}

/**
 * p_un_int - print unisigned int
 * @bers: unsigned int
 * Return: unsigned int print
 */
int p_un_int(unsigned int bers)
{
int a = 1, b = 0;
unsigned int lisa = bers;

for (; lisa / a > 9; )
a *= 10;

for (; a != 0; )
{
b += _put_char('0' + lisa / a);
lisa %= a;
a /= 10;
}
return (b);
}
