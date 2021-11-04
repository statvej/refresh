#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
    char *def = mx_strnew(mx_strlen(str));

    mx_strcpy(def, str);
    
    return def;
}

// int main()
// {
//     char *pp = "pp";
//     char *poopoo = "poopoo";
//     pp = mx_strdup(poopoo);
//     printf("%s", pp);
// }
