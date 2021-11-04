int mx_sqrt(int x)
{
    int start = 0;
    int count = 0;
    int mid = 1;
    int size = __INT16_MAX__;
    if (x == 0)
    {
        return 0;
    }
    while (0==0)
    {

        mid = start + (size - start) / 2;

        if (mid * mid == x)
        {
            return mid;
        }
        if (mid * mid < x)
        {
            start = mid;
        }
        else if (mid * mid > x)
        {
            size = mid;
        }
        count++;
        if (count >= __INT16_MAX__)
        {
            return 0;
        }
        
    }

    return 0;
}

