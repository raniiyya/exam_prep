#include <unistd.h>

void    inter(char *s1, char *s2)
{
    int met[128] = {0}; //for checking the doubles
    int i = 0; //for iterating over av1
    int j = 0; //for iterating over av2

    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if(s1[i] == s2[j] && met[(int)s1[i]] == 0)
            {
                write(1, &s1[i], 1);
                met[(int)s1[i]] = 1;
                continue;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return (1);
    inter(argv[1], argv[2]);
}