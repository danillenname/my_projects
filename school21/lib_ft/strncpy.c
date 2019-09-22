#include <string.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] && len)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while(len--)
	{
		dst[i++] = '\0';
	}
	return (dst);
}