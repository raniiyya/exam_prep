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
        char upperchar = to_upper(*str);
        printf("%c", upperchar);
        if (str_base > 10) {
            if (!((upperchar >= '0' && upperchar <= '9') 
            || (upperchar >= 'A' && upperchar <= (str_base - 10 + 'A') ))) {
                break;
            }
        }
        if (upperchar >= '0' && upperchar <= '9')
            result = result * str_base + *str - '0';
        if (upperchar >= 'A' && upperchar <= 'F')
            result = result * str_base + upperchar - 'A' + 10;
        str++;
    }
    return result * sign;
}
int main() {
    printf("%d", ft_atoi_base("abc", 16));
}