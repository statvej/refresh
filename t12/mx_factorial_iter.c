
int mx_factorial_iter(int n)
{
    int counter = 0;
    int result = 1;
    if (n > 0 || n <= 5)
    {
        while (counter != n)
        {
            ++counter;
            result = result * counter;
        }
    }
    else
    {
        return 0;
    }
    if (result > 2147483647)
    {
        return 0;
    }

    return result;
}
