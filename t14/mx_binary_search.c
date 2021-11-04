#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    int right = size - 1;
    int left = 0;

    if (!arr)
        return -1;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        (*count)++;

        if (mx_strcmp(arr[middle], s) == 0)
            return middle;
        else if (mx_strcmp(arr[middle], s) > 0)
        {
            right = middle - 1;
        }
        else if (mx_strcmp(arr[middle], s) < 0)
        {
            left = middle + 1;
        }
    }
    *count = 0;
    return -1;
}
// int main()
// {
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("%d\n", mx_binary_search(arr, 6, "ab", &count));  //3
//     printf("%d\n", mx_binary_search(arr, 6, "aBc", &count)); // 2
//     printf("%d\n", mx_binary_search(arr, 6, "aBz", &count)); // -1
// }
