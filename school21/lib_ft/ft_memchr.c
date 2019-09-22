#include <string.h>

void *ft_memchr (const void *arr, int c, size_t n)
{
	int i;
	char *ptr;

	i = 0;
	ptr = (char *)arr;
	while (n-- > 0)
	{
		if (ptr[i] == (char)c)
			return ((void *)(arr + i));
		i++;
	}
	return (NULL);
	
}