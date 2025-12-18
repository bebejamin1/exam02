#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i != 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet = octet - i;
		}
		else
			write(1, "0", 1);
		i = i / 2;
	}
}

#include <stdio.h>
int main(void)
{
	int i = 0;
	while (i <= 255)
	{
		print_bits(i);
		write(1, "   ", 2);
		if (i % 6 == 0)
			printf("\n");
		i++;
	}
}