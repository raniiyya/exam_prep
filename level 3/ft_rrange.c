#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int step = 1;
    int size;
    int *range;

    if (start < end) { //we want to decrement because we're starting from the end
        step = -1;
        size = end - start + 1;
    } else
        size = start - end + 1;
    if (size <= 0)
        return NULL;
    range = (int *)malloc(sizeof(int) * size);
    if (!size)
        return NULL;
    while (i < size) {
        range[i] = end; //decrementing from end 
        end += step;
        i++;
    }
    return range;
}
