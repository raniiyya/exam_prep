#include <unistd.h>

static int mini_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i]) {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

static void mini_putnbr(int nb)
{
    char c;

    if (nb >= 10) {
        mini_putnbr(nb / 10);
        mini_putnbr(nb % 10);
    } else {
		c = nb + '0';
		write(1, &c, 1);
	}
}

int main(int ac, char *av[])
{
    int i = 1;
    int nb = mini_atoi(av[1]);

    if (ac == 1)
        return 0;
    while (i <= 9) {
        mini_putnbr(i);
        write(1, " x ", 3);
        mini_putnbr(nb);
        write(1, " = ", 3);
        mini_putnbr(i * nb);
        write(1, "\n", 1);
        i++;
    }
}