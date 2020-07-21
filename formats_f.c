 #include "holberton.h"
/**
 *print_c - char print
 *@ls: arguments
 *Return: char print.
 */
int print_c(va_list ls)
{
_put_char(va_arg(ls, int));
return (1);
}

/**
 *print_s - print string
 *@ls: arguments
 *Return: print string
 */
int print_s(va_list ls)
{
int a;
char *s;

s = va_arg(ls, char *);
if (s == NULL)
s = "(null)";
for (a = 0; s[a] != '\0'; a++)
{
_put_char(s[a]);
}
return (a);
}
/**
 *print_p - print porcent
 *@ls: arguments
 *Return: char print
 */
int print_p(__attribute__((unused))va_list ls)
{
_put_char('%');
return (1);
}