#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dup)
		return (0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup[i] = '\0', dup);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *ok = "yo";
	char *tmp = NULL;
	tmp = ft_strdup(ok);
	printf("mwa : %s\n", tmp);
	free(tmp);
	
	ok = "yo";
	tmp = strdup(ok);
	printf("twa : %s\n", tmp);
	free(tmp);
}