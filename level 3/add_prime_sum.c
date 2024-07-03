#include <unistd.h>

int		mini_atoi(char *s) //to make the char to int
{
	int num = 0;
	int i = 0;

	while (s[i]) {
		num = num * 10 + s[i] - '0';
		i++;
	}
	return num;
}

void	mini_putnbr(int n) //to separate the nums
{
	char digit;

	if (n >= 10)
		mini_putnbr(n / 10);
	digit = n % 10 + '0'; //we do + '0' because we're printing it right after
	write(1, &digit, 1);
}

int		main(int ac, char *av[])
{
	int i = 2; //our first prime num, iterator
	int sum = 0;

	if (ac != 2) {
		write(1, "0\n", 2);
		return 0;
	}
	if (mini_atoi(av[1]) < 2) {
		write(1, "0\n", 2);
		return 0;
	}
	while (i <= mini_atoi(av[1])) {
		int j = 2; //for the division
		int prime = 1;

		while (j <= i / 2) { //a number is not divisible by any number greater than half of it
			if (i % j == 0) { //if modulo % j is equal to 0 (net ostatka) -> it's not a prime num
				prime = 0;
				break;
			}
			j++;
		}
		if (prime == 1) {
			sum += i;
		}
		i++;
	}
	mini_putnbr(sum);
	write(1, "\n", 1);
}