#include <stdlib.h>
char *mx_strcpy(char *dst, const char *src)
{
    if (src == NULL || dst == NULL)
    {
        return NULL;
    }
    char *saved = dst;
    while (*src)
    {
        *dst++ = *src++;
    }
    *dst = 0;
    return saved;
}
