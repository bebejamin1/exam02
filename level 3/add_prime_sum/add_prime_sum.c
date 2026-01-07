#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned long result;
	unsigned long i;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

int ft_fprime(unsigned long nbr)
{
	unsigned long	test_nbr;
	unsigned long	if_nbr_fprime = 2;
	unsigned long	calcul = 0;

	while (if_nbr_fprime <= nbr)
	{
		test_nbr = 2;
		while (if_nbr_fprime % test_nbr != 0 && test_nbr < if_nbr_fprime)
		{
			test_nbr++;
		}
		if (if_nbr_fprime == test_nbr)
			calcul = calcul + if_nbr_fprime;
		if_nbr_fprime++;
	}
	return (calcul);
}

char	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putnbr(unsigned long nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] >= '0' && argv[1][0] <= '9')
	{
		int nbr = ft_fprime(ft_atoi(argv[1]));
		ft_putnbr(nbr);
	}
	else
		return (write(1, "0\n", 2));
	return (write(1, "\n", 1));
}