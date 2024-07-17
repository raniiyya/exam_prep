#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av) {
	if (ac < 2)
		return 0; 

	char *word; //to save the first word
	char *str; //for the rest of the string
	int i = 0;

	while (av[1][i] == ' ' || av[1][i] == '\t') 
        i++;
	word = malloc(1024); //max char size a string can have
	if (!word)
        return 0;
	while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t') {
		word[i] = av[1][i];
		i++;
	}
	word[i] = '\0';
	while (av[1][i] == ' ' || av[1][i] == '\t')
        i++;
	str = av[1] + i; // str = &av[1][i] to point to the second word (that will be the first)
	i = 0;
	while (str[i]) {
		if (str[i] == ' ' || str[i] == '\t') {
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			write(1, " ", 1);
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
	i = 0;
	while (word[i]) {
		write(1, &word[i], 1);
		i++;
	}
	return 0;
}
 0123456789
"asdsafa addsgdsgfdsgsd dsfhfdh       fdhfdh fdh dfh" " "