#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *ptr;
	const char *ptr2;

	ptr = (char *)dst;
	ptr2 = (char *)src;
	while (n-- > 0)
	{
		if (*(ptr2) == c)
			return (0);
		*(ptr++) = *(ptr2++);
	}
	return (dst);
}