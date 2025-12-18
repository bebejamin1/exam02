int	ft_atoi(const char *str)
{
	int	result;
	int	signe;
	int	i;

	result = 0;
	signe = 1;
	i = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i++] == '-')
				signe *= -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		return (result * signe);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("Mon atoi\n\n");
	printf("+25 =  %d\n", ft_atoi(" \t\n+25"));
	printf("-25 =  %d\n", ft_atoi(" \t\n-25"));
	printf("-+25 = %d\n", ft_atoi(" \t\n-+25"));
	printf("+-25 = %d\n", ft_atoi(" \t\n+-25"));
	printf("\n");
	printf("LE atoi\n\n");
	printf("+25 =  %d\n", atoi(" \t\n+25"));
	printf("-25 =  %d\n", atoi(" \t\n-25"));
	printf("-+25 = %d\n", atoi(" \t\n-+25"));
	printf("+-25 = %d\n", atoi(" \t\n+-25"));
}