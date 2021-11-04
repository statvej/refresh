#include "stdio.h"

double mx_pow(double n, unsigned int pow)
{
    double c = n;

    if (pow == 0)
    {
        return 1;
    }
    for (unsigned int i = 1; i < pow; ++i)
    {
        n *= c;
    }
    return n;
}
// int main()
// {
//     printf("%f", mx_pow(2, 10));
// }
