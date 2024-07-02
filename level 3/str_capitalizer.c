#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	int j = 1;

	if (ac == 1) {
		write(1, "\n", 1);
		return 0;
	}
	
	while (av[j]) {
		i = 0;
		while (av[j][i] == ' ' && av[j][i] == '\t') 
			i++;
		if (av[j][0] >= 'a' && av[j][0] <= 'z')
			av[j][i] -= 32;
		while (av[j][i]) {
			if ((av[j][i - 1] == ' ' || av[j][i - 1] == '\t') && av[j][i] >= 'A' && av[j][i] <= 'Z')
				av[j][i] += 32;
			else if ((av[j][i - 1] != ' ' || av[j][i - 1] != '\t') && av[j][i] >= 'a' && av[j][i] <= 'z')
				av[j][i] -= 32;
			write(1, &av[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}