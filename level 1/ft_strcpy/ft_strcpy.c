char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1[i] = '\0', s1);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[100] = "bonjour aujourdhui cest le nouveau tronc commun";
	char s2[100] = "OK";
	printf("%s\n", ft_strcpy(s1, s2));
	char s1_2[100] = "bonjour aujourdhui cest le nouveau tronc commun";
	char s2_2[100] = "OK";
	printf("%s\n", strcpy(s1_2, s2_2));
	return (1);
}