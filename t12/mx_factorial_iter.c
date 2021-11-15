
int mx_factorial_iter(int n)
{
    int counter = 0;
    int result = 1;
    if (n >= 0)
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
    if (result >= 1932053504)
    {
        return 0;
    }

    return result;
}
