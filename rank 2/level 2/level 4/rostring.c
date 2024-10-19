#include <unistd.h>

int	main(int ac, char **av) {
	int i = 0;
	int j = 0;
	char s1[256] = {0};
	char s2[256] = {0};

	if (ac < 2) {
		write(1, "\n", 1);
		return 0;
	}
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	while (av[1][i] != ' ' && av[1][i] != '\t') {
		s1[j] = av[1][i];
		i++;
		j++;
	}
	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	j = 0;
	while (av[1][i]) {
		if (av[1][i] == ' ' || av[1][i] == '\t') {
			s2[j] = av[1][i];
			j++;
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
		}
		s2[j] = av[1][i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i]) {
		write(1, &s2[i], 1);
		i++;
	}
	if (i > 0 && s2[i - 1] != ' ')
		write(1, " ", 1);
	i = 0;
	while (s1[i]) {
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
