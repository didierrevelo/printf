#include "holberton.h"
/**
 * compar:print a formated string
 * 
 * 
 */
int compar(const char *format, all_t l_funct[], va_list arg)
{
    int a, b, c, d;

    d = 0;
    for (a = 0; format[a] != '\0'; a++)
    {
        if (format[a] == '%')
        {
            for (b = 0; l_funct[b].enter != NULL; b++)
            {
                if (format[a + 1] == l_funct[b].enter[0])
                {
                    c = l_funct[b].far(arg);
                    if (c == -1)
                        return (-1);
                    d += c;
                    break;
                }
            }
            if (l_funct[b].enter == NULL && format[a + 1] != ' ')
            {
                if (format[a + 1] != '\0')
                {
                    _put_char(format[a]);
                    _put_char(format[a + 1]);
                    d = d + 2;
                }
                else
                {
                    return (-1);
                }
            }
            a = a + 1;
        }
        else
        {
            _put_char(format[a]);
            d++;
        }
        
    }return (d);
    
    
}