#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

static void ft_putstr(char *str, int *count) {
    if (!str)
        str = "(null)";
    while (*str) {
        write(1, str++, 1);
        (*count)++;
    }
}

int ft_printf(char *format, ...) {
    va_list args;

    va_start(args, format);
    while (*format) {
        write(1, format++, 1);
    }
}