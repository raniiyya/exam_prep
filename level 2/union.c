#include <unistd.h>

int main(int ac, char **av) {
    char chars[256] = {0}; //for storing chars
    int i = 1; //for arguments

    if (ac != 3) {
        write(1, "\n", 1);
        return 0;
    }
    while (av[i]) {
        int j = 0; //for iterating over argument
        while (av[i][j]) {
            int k = 0; // iterating over chars array
            int is_double = 0; //for checking the doubles
            while (chars[k]) {
                if (chars[k] == av[i][j]) // if any character in k is equal to the current character in av[i][j]
                    is_double = 1;
                k++;
            }
            if (is_double == 0) {
                write(1, &av[i][j], 1);
                chars[k] = av[i][j]; //storing the chars that we printed
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}