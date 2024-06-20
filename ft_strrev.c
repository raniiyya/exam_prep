#include <stdlib.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int j;
    int len = 0;
    char tmp;

    if(!str)
        return NULL;
    while (str[len] != '\0')
        len++;
    len -= 1;
    j = len / 2;
    while (len != j)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
        i++;
    }
    return str;
}

#include <stdio.h>

int main(void)
{
    char *str = "rani";

    printf("%s", ft_strrev(str));
}