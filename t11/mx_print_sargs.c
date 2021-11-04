#include <unistd.h>
#include <string.h>
#include <stdio.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[])
{
    for (int a = 1; a < argc; a++)
    {
        for (int b = a + 1; b < argc; b++)
        {
            if (mx_strcmp(argv[a], argv[b]) >= 0)
            {
                char *temp = argv[a];
                argv[a] = argv[b];
                argv[b] = temp;
            }
        }
    }
    for (int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
