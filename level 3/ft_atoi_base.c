#include <stdio.h>

char to_upper(char c) {
    if (c >= 'a' && c <= 'f')
        return (c - 32);
    return c;
}

int     ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;

    if (*str == '-') {
        while (*str == '-')
            str++;
        sign = -1;
    }
    while (*str) {
        char c = to_upper(*str);

        if (str_base > 10) {
            if (!((c >= '0' && c <= '9') 
            || (c >= 'A' && c <= (str_base - 10 + 'A') ))) {
                break;                   
            }
        }
        if (c >= '0' && c <= '9')
            result = result * str_base + *str - '0';
        if (c >= 'A' && c <= 'F')
            result = result * str_base + c - 'A' + 10; // or -55
        str++;
    }
    return result * sign;
}
int main() {
    printf("%d", ft_atoi_base("abcdef", 16));
}
