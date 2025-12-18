#include <stddef.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	const char *ok1 = "";
	const char *ok2 = "";
	printf("%zu\n", ft_strcspn(ok1, ok2));
	printf("%zu\n", strcspn(ok1, ok2));
}