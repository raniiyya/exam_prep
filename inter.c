int main(int ac, char **av) {
    int i;
    int j;
    int k;
    int count;
    
    if (ac != 3) {
        write(1, "\n", 1);
        return 0;
    }
    i = 0;
    j = 0;
    while (av[1][i]) {
        while (av[2][j]) {        // abscde axcbxcxdxsffex
            if (av[1][i] == av[2][j]) {
                k = 0;
                count = 0;
                while (k < j) {
                    if (av[2][j] == av[2][k]) {
                        count++;
                    }
                    k++;
                }
                if (count == 0) {
                    write(1, &av[1][i], 1);
                }
                break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}