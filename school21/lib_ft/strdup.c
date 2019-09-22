#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *str)
{
	char *dst;
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}