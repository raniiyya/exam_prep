#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int i = 0;
    int step = 1;
    int size;

    if (start > end) {
        step = -1;
        size = start - end + 1;
    } else
        size = end - start + 1;
    if (size <= 0)
        return NULL;
    range = (int *)malloc(sizeof(int) * size);
    if (!range)
        return NULL;
    while (i < size) {
        range[i] = start;
        start += step;
        i++;
    }
    return range;
}