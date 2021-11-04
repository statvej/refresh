#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *mx_strnew(const int size)
{

    char *str = (char *)malloc(size * sizeof(char));

    if (str == NULL)
    {
        return NULL;
    }
    else
    {

        return str;
    }
}
