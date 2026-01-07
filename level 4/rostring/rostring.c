#include <unistd.h>

int count_word(char *str)
{
    int i = 0;
    int count = 1;

    while (str[i])
    {
        if ((str[i] == ' ' || str[i] == '\t') &&
                (str[i + 1] != ' ' || str[i + 1] != '\t'))
            count++;
        while ((str[i] == ' ' || str[i] == '\t') &&
                (str[i + 1] != ' ' || str[i + 1] != '\t'))
			i++;
        if (str[i] != ' ' || str[i] != '\t')
            i++;
    }
    return(count);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("%d", count_word("abc    yyhhh v v"));
// }


int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        int first = i;
        while (argv[1][i] >= '!' && argv[1][i] <= '~')
            i++;
        int last = i;
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            while (argv[1][i] >= '!' && argv[1][i] <= '~')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            if (argv[1][i] != '\0')
                write(1, " ", 1);
        }
        if (count_word(argv[1]) > 1)
            write(1, " ", 1);
        while (first < last)
        {
            write(1, &argv[1][first], 1);
            first++;
        }
    }
    return (write(1, "\n", 1));
}