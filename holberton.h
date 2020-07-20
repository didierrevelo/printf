#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct all - this structure contine the the symbol of function.
 * 
 * @enter: operator function
 * @far: function linked
 */
typedef struct all {
    char *enter;
    int (*far)(va_list);
}all_t;


int _printf(const char *format, ...);
int print_c(va_list);
int print_s(va_list);
int print_p(va_list);



#endif