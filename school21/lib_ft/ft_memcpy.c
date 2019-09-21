#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *ptr;
	const char *ptr2;

	ptr = (char *)dst;
	ptr2 = (char *)src;
	while (n-- > 0)
	{
		*(ptr++) = *(ptr2++);
	}
	return (dst);
}