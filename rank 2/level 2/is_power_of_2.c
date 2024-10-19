int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0; //if we compare a num to a num - 1 and the comparison is 0000 => it's power of 2
}