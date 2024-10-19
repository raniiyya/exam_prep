char    *ft_strdup(char *src)
{
    int len = 0;
    int i = 0;
    char *tmp;

    if (!src)
        return 0;
    while (src[len] != '\0')
        len++;
    tmp = (char *)malloc(sizeof(char) * len + 1);
    while (src[i] != '\0')
    {
        tmp[i] == src[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}