#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	if (argc == 2 && argv[1][0] != '\0')
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				count = argv[1][i] - 97;
				while (count >= 0)
				{
					write(1, &argv[1][i], 1);
					count--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				count = argv[1][i] - 65;
				while (count >= 0)
				{
					write(1, &argv[1][i], 1);
					count--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	return (write(1, "\n", 1));
}