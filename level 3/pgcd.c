#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int a = atoi(av[1]);
    int b = atoi(av[2]);
    int denom = a;

    if (ac != 3) {
        write(1, "\n", 1);
        return 0;
    }
    if (b < a)
        denom = b;
    while (denom > 0) {
        if (a % denom == 0 && b % denom == 0)
            break;
        denom--;
    }
    printf("%d\n", denom);
}