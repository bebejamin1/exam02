int	max(int* tab, unsigned int len)
{
	if (!tab)
		return (0);
	unsigned int	i;
	int tmp;

	i = 0;
	tmp = 0;
	while (i < len)
	{
		if (tab[i] > tmp)
			tmp = tab[i];
		i++;
	}
	return (tmp);
}

#include <stdio.h>
int main(void)
{
	unsigned int len = 5;
	int tab[5] = {22000, 1000, 20, 30, 40};
	printf("%d\n", max(tab, len));
}