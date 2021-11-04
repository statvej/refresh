#include <unistd.h>

void mx_printchar(char c){
    const char * p = &c;
    write (1,p,1);
}
