#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*tab;
	int	i;

	tab = malloc(sizeof(int *) * (end - start) + 1);
	if (!tab)
		return (0);
	i = 0;
	while (start <= end)
	{
		tab[i] = start;
		i++;
		start++;
	}
	return (tab);
}

#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int start = 2;
	int end = 20;
	int *tab = ft_range(start, end);
	int i = 0;
	printf("{ ");
	while (i < (end - start))
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[i]);

	printf(" }");
	free (tab);
}