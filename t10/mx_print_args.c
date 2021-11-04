#include <unistd.h>

void mx_printchar(char c);

int mx_strlen(const char *s);
void mx_prinstr(const char *s);

int main(int argc, char **argv)
{

    for (int argcount = 1; argcount != argc; argcount++)
    {
        mx_prinstr(argv[argcount]);
        mx_printchar('\n');
    }
}
