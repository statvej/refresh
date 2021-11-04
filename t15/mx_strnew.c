#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *mx_strnew(const int size)
{

    char *str = (char *)malloc(size * 1);

    if (str == NULL)
    {
        return NULL;
    }
    else
    {

        return str;
    }
}
