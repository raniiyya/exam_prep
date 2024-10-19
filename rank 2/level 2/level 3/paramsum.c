#include <unistd.h>

static void mini_putnbr(int n)
{
    char c;

    if (n >= 10)
        mini_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(int ac, char **av) 
{
    mini_putnbr(ac - 1);
    write(1, "\n", 1);

    (void)av;
    return 0;
}