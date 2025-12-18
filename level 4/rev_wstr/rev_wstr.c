#include <stdlib.h>
#include <unistd.h>

int count_word(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i])
	{
		if ((str[i] != ' ' || str[i] != '\t') && (str[i+1] == ' ' || str[i + 1] == '\t'))
			count++;
		i++;
	}
	return (count);
}

#include <stdio.h>
int main(int arc, char **arv)
{
	int	i;
	int	start;
	int	end;
	int	count;

	i = 0;
	count = count_word(arv[1]);
	if (arc == 2)
	{
		if (count == 1)
		{
			while (arv[1][i])
			{
				write(1, &arv[1][i], 1);
				i++;
			}
		}
		else
		{
			while (arv[1][i])
				i++;
			end = i - 1;
			while (i >= 0)
			{
				if (arv[1][i] == ' ' || arv[1][i] == '\t')
					write(1, &arv[1][i], 1);
				if (arv[1][i] == ' ' || arv[1][i] == '\t' || i == 0)
				{
					start = i;
					while (start <= end)
					{
						write(1, &arv[1][start], 1);
						start++;
					}
					end = i;
				}
				i--;
			}
		}
	}
	return (write(1, "\n", 1));
}