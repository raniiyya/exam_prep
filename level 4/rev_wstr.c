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
	while (count != -1) {
		if (av[1][count - 1] == '\t' || av[1][count - 1] == ' ' || count == 0) { //the next char is '\t' or ' ' or 0
			i = count;
			while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t') { //printing the word
				write(1, &av[1][i], 1);
				i++;
			}
		if (av[1][count] == ' ')
			write(1, " ", 1);
		}
		count--;
	}
    write(1, "\n", 1);
}