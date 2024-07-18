#include <unistd.h>

static int ft_atoi(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0') {
		count = count * 10 + s[i] - '0';
		i++;
	}
	return (count);
}

static void print_hex(int num)
{
	char hex_nums[] = "0123456789abcdef";

	if (num > 16)
		print_hex(num / 16);
	write(1, &hex_nums[num % 16], 1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return 0;
}