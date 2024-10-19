static size_t	numlen(int num)
{
	size_t	i;

	i = 0;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = numlen(n);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (!tmp)
		return (NULL);
	tmp[i] = '\0';
	while (n > 0)
	{
		tmp[--i] = n % 10 + 48;
		n = n / 10;
	}
	if (i > 0)
		tmp[0] = '-';
	return (tmp);
}