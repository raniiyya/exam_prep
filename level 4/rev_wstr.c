#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int len = 0;

	if (ac != 2) {
		write(1, "\n", 1);
		return 0;
	}
	while (av[1][len])
		len++;
	while (len != -1) {
		if (av[1][len - 1] == ' ' || av[1][len - 1] == '\t' || len == 0) { //the next char is space/tab/at index 0
			i = len;
			while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i]) { //printing the word
				write(1, &av[1][i], 1);
				i++;
			}
		}
		if (av[1][len] == ' ') //printing spaces
			write(1, " ", 1);
		len--;
	}
	write(1, "\n", 1);
}