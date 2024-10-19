#include <unistd.h>

int main(int ac, char *av[])
{
	int i = 0;

	if (ac != 2) {
		write(1, "\n", 1);
		return 0;
	}
	while (av[1][i] == ' ' || av[1][i] == '\t') 
		i++;
	while (av[1][i]) {
		if ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i + 1] == '\0')
			break;
		write(1, &av[1][i], 1);
		if (av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		else {
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			write(1, "  ", 2);
		}
	}
	write(1, "\n", 1);
	return 0;
}