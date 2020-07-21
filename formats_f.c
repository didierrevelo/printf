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
/**
 *print_i - print int
 *@ls: arguments
 *Return: numbers print
 */
int print_i(va_list ls)
{
    int numbers;

    numbers = p_number(ls);
    return (numbers);
}
/**
 * p_number - print numbers
 * @lisa: arguments
 * Return: print numbers
 */
int p_number(va_list lisa)
{
    int a, b, c;
    unsigned int bers;

    a = va_arg(lisa, int);
    b = 1;
    c = 0;

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
        c +=_put_char('0' + bers / b);
        bers %= b;
        b /= 10;
    }
    return (bers);
}
