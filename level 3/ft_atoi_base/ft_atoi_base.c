#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	signe;
	int	result;
	char	*number;

	i = 0;
	signe = 1;
	result = 0;
	number = (char *)str;
	while (number[i] == ' ' || (number[i] >= 9 && number[i] <= 13))
		i++;
	if (number[i] == '-')
	{
		signe = signe * -1;
		i++;
	}
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
			result = (result * str_base) + number[i] - '0';
		else if (number[i] >= 'A' && number[i] <= 'F')
			result = (result * str_base) + number[i] - '7';
		else if (number[i] >= 'a' && number[i] <= 'f')
			result = (result * str_base) + number[i] - 'W';
		i++;
	}
	return (result * signe);
}

#include <stdio.h>
int main(void)
{
	int a;
	a = ft_atoi_base("12fdb3", 16); // 12fdb3 => 1244595
	printf("%d", a);
}
