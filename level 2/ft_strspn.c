#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int j = 0;
    int count;

    if (!s || !accept)
        return 0;
    while (s[j])
    {
        i = 0;
        count = 0;
        while (accept[i] != '\0')
        {
            if (s[j] == accept[i])
                count++;
            i++;
        }
        j++;
    }
    return j;
}

#include <stdio.h>

int main(void)
{
    char s[] = "rani";
    char accept[] = "davur";

    printf("%zu", ft_strspn(s, accept));
}