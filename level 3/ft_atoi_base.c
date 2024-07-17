#include <stdio.h>

char to_upper(char c) {
    if (c >= 'a' && c <= 'f')
        return (c - 32);
    return c;
}

int     ft_atoi_base(const char *str, int str_base)
{
    int result = 0; //for converting
    int sign = 1; //for the minus

    if (*str == '-') { //for the negative nums
        while (*str == '-')
            str++;
        sign = -1;
    }
    while (*str) { //for conveting
        char c = to_upper(*str);

        if (str_base > 10) {
            if (!((c >= '0' && c <= '9') 
            || (c >= 'A' && c <= (str_base - 10 + 'A') ))) { //if str_base is 13 (e.g) we want to work in a range from a to d
                break;                   
            }
        }
        if (c >= '0' && c <= '9')
            result = result * str_base + *str - '0'; //our everything == 0 in the beginning, we do - '0' to make it int
        if (c >= 'A' && c <= 'F')
            result = result * str_base + c - 'A' + 10; // or -55 -> to make the value in hex
        str++;
    }
    return result * sign;
}
int main() {
    printf("%d", ft_atoi_base("abcdef", 16));
}
