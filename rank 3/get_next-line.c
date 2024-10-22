#include "get_next_line.h"

char    *ft_strdup(char *src) {
    char    *dest;
    int     i = 0;

    while(src[i])
        i++;
    dest = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char    *get_next_line(int fd) {
    char            line[70000];
    int             i = 0;
    static char     buffer[BUFFER_SIZE]; 
    static int      buffer_read; //static saves the value of the variable no matter where in the function you're changing it
    static int      buffer_pos;

    if (fd < 0 || BUFFER_SIZE <= 0) //i don't get it overall
        return NULL;
    while (1) {
        if (buffer_pos >= buffer_read) {
            buffer_read = read(fd, buffer, BUFFER_SIZE);
            buffer_pos = 0;
            if (buffer_read <= 0)
                break ;
        }
        if (line[i] == '\n')
            break ;
        line[i] = buffer[buffer_pos++];
        i++;
    }
    line[i] = '\0';
    if (i == 0)
        return NULL;
    return ft_strdup(line);
}