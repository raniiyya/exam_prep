#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

static void ft_putstr(char *str, int *count)
{
    if (!str)
        s = "(null)";
    while (*str)
    {
        write(1, str++, 1);
        (*count)++;
    }
}

static void ft_putnbr(int n, int *count)
{
    char c;

    if (n == -2147483648)
    {
        ft_putstr("-2147483648", count);
        return ;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        (*count)++;
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10, count);
    c = (n % 10) + '0';
    write(1, &c, 1);
    (*count)++;
}

static void ft_puthex(unsigned int n, int *count)
{
    char *hex = "0123456789abcdef";

    if (n >= 16)
        ft_puthex(n / 16, count);
    write(1, &hex[n % 16], 1);
    (*count)++;
}




