#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2 && argv[1][0])
	{
		while (argv[1][i])
			i++;
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		j = i + 1;
		while (argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t' && i >= 0)
			i--;
		if (i > 0)
			write(1, &argv[1][i], (j - i));
	}
	return (write(1, "\n", 1));
}