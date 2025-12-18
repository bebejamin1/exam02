#include <unistd.h>

int main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2 && argv[1][0])
	{
		while (argv[1][i])
		{
			while (argv[1][i] == '_')
				i++;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}