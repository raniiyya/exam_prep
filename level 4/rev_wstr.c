#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	int count = 0;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][count] != '\0')
		count++;
	i = count;
	while (i != -1)
	{
		if (av[1][i - 1] == '\t' || av[1][i - 1] == ' ' || i == 0)
		{
			count = i;
			while (av[1][count] != '\0' && av[1][count] != ' ' && av[1][count] != '\t')
			{
				write(1, &av[1][count], 1);
				count++;
			}
		}
		if (av[1][i] == ' ')
			write(1, " ", 1);
		i--;
	}
    write(1, "\n", 1);
}