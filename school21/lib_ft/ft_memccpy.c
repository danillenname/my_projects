#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *ptr;
	const char *ptr2;
	int i;

	i = 1;
	ptr = (char *)dst;
	ptr2 = (char *)src;
	while (n-- > 0)
	{
		*(ptr++) = *(ptr2++);
		i++;
		if (*(ptr2) == c)
			return ((void *)(dst + i));
	}
	return (NULL);
}