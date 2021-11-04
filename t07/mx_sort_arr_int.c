
#include <stdio.h>

void mx_sort_arr_int(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = arr[i];
        int x = i;

        for (int j = i; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                x = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[x];
        arr[x] = temp;
        
    }
}

