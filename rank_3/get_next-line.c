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
    static char     buffer[BUFFER_SIZE]; //number of characters i can fit into buffer var
    static int      buffer_read; // num of chars i've read
    static int      buffer_pos; //static saves the value of the variable no matter where in the function you're changing it

    if (fd < 0 || BUFFER_SIZE <= 0) // fd < 0 == means it wasn't opened overall
        return NULL;
    while (1) { //indefinite loop until break
        if (buffer_pos >= buffer_read) { //check if the current pos has reached or exceeded the num of chars read
            buffer_read = read(fd, buffer, BUFFER_SIZE); //read returns the nums it has successfully read
            buffer_pos = 0;
            if (buffer_read <= 0) //if end of file
                break ;
        }
        if (line[i] == '\n') //if end of the line
            break ;
        line[i] = buffer[buffer_pos++]; //copies the char from the buffer to the line
        i++;
    }
    line[i] = '\0';
    if (i == 0) //if no chars were read into the line
        return NULL;
    return ft_strdup(line);
}