int     ft_atoi_base(const char *str, int str_base)
{
    int result;
    int sign = -1;

    if (*str == '-') {
        while (*str == '-')
            str++;
        sign = -1;
    }
    while (*str) {
        if (*str >= '0' && *str <= '9')
            result = result * str_base + *str - '0';
        if (*str >= 'A' && *str <= 'F')
            result = result * str_base + *str - 'A' + 10;
        if (*str >= 'a' && *str <= 'f')
            result = result * str_base + *str - 'a' + 10;
        str++;
    }
    return result * sign;
}