void mx_printchar(char c);

void mx_print_alphabet(void)
{
    int asc = 65;
    int count = 1;
    mx_printchar(asc);
    while (count < 26)
    {
        if (count % 2 != 0)
        {

            asc = asc + 33;
            mx_printchar(asc);
        }
        else
        {

            asc = asc - 31;
            mx_printchar(asc);
        }
        count++;
    }
    mx_printchar('\n');
}
