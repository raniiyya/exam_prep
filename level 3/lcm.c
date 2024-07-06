unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int x = a;

    if (a == 0 || b == 0)
        return 0;
    if (b > a)
        x = b;
    while (x % a != 0 || x % b != 0)
        x++;
    return x;
}
